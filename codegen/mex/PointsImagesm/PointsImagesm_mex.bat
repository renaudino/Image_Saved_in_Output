@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=PointsImages
set MEX_NAME=PointsImages
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2016a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for PointsImagesm > PointsImagesm_mex.mki
echo COMPILER=%COMPILER%>> PointsImagesm_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> PointsImagesm_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> PointsImagesm_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> PointsImagesm_mex.mki
echo LINKER=%LINKER%>> PointsImagesm_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> PointsImagesm_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> PointsImagesm_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> PointsImagesm_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> PointsImagesm_mex.mki
echo BORLAND=%BORLAND%>> PointsImagesm_mex.mki
echo OMPFLAGS= >> PointsImagesm_mex.mki
echo OMPLINKFLAGS= >> PointsImagesm_mex.mki
echo EMC_COMPILER=lcc64>> PointsImagesm_mex.mki
echo EMC_CONFIG=optim>> PointsImagesm_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f PointsImagesm_mex.mk
