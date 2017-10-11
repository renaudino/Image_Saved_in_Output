function [appface] = AppFace2 (point_re, p_mat)

%#codegen 
% Function APPFACE checks if the point POINT_RE lies in the four-sided polygon which is defined by four points 
% in the matrix P_MAT. Logical 1 is returned if the query point lies in the same plane as the four polygon 
% points and if it is inside the polygon, logical 0 is returned otherwise. The algorithm for checking if the query 
% point is in a polygon (in 2D space) can be found at:
% 
% "An Efficient Test for a Point to Be in a Convex Polygon" from the Wolfram Demonstrations Project
%  http://demonstrations.wolfram.com/AnEfficientTestForAPointToBeInAConvexPolygon/

% Define vectors spanning the plane in which the polygon lives
p21 = p_mat(:,2)-p_mat(:,1);
p41 = p_mat(:,4)-p_mat(:,1);

% Calculating the planes normal vector and normalizing it
n   = [p21(2)*p41(3)-p21(3)*p41(2) p21(3)*p41(1)-p21(1)*p41(3) p21(1)*p41(2)-p21(2)*p41(1)].';
n   = n/norm(n);   

% If the vector to the query point and the normal vector are not othogonal, the query point is not within 
% the plane or the polygon
if (abs((n.'*(point_re(:)-p_mat(:,1)))) > 1e-6)
    appface = 0;
    return;
% If the vector to the query point and the normal vector are othogonal, rotate the plane to create 
% a 2D problem and check if the point is within the polygon
else
    % Calculate the center of mass for the polygon
    mid = sum(p_mat,2)/4;
    % Calculate the orthogonal basis vectors for the new coordinate system
    b1 = p21/norm(p21);
    b3 = n;
    b2 = [b1(2)*b3(3)-b1(3)*b3(2) b1(3)*b3(1)-b1(1)*b3(3) b1(1)*b3(2)-b1(2)*b3(1)].';
    % Transform the shifted polygon with new basis vectors
    pmat2d = [b1 b2 b3].'*(p_mat-mid*ones(1,4));
    % Actual algorithm checking if the query point lies within the polygon, first shift the coordinate system such that 
    % the query point coincides with the coordinate origin
    pmat0 = pmat2d-[b1 b2 b3].'*(point_re(:)-mid)*ones(1,4);
    % Only consider two dimensions and add the first point as last point
    pmat0e = [pmat0(1:2,:) pmat0(1:2,1)];
    
    % Check if the angles between two vertices of the polygon (has to be counterclockwisely defined!) change sign
    angle_sign = ((pmat0e(1,2:end).*pmat0e(2,1:end-1)-pmat0e(1,1:end-1).*pmat0e(2,2:end)) >= 0);
    
	% If no angle sign change occured, query point is within polygon
    if (sum(angle_sign) == 4)
        appface = 1;
    % If angle sign change occured, query point is not within polygon
    else
        appface = 0;
    end
end