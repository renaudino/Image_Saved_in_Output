@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=PointsImages
set MEX_NAME=PointsImages
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for PointsImages > PointsImages_mex.mki
echo COMPILER=%COMPILER%>> PointsImages_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> PointsImages_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> PointsImages_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> PointsImages_mex.mki
echo LINKER=%LINKER%>> PointsImages_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> PointsImages_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> PointsImages_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> PointsImages_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> PointsImages_mex.mki
echo BORLAND=%BORLAND%>> PointsImages_mex.mki
echo OMPFLAGS= >> PointsImages_mex.mki
echo OMPLINKFLAGS= >> PointsImages_mex.mki
echo EMC_COMPILER=msvcsdk>> PointsImages_mex.mki
echo EMC_CONFIG=optim>> PointsImages_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f PointsImages_mex.mk
