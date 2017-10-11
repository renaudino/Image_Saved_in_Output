@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=dispointsQP
set MEX_NAME=dispointsQP
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for dispointsQP > dispointsQP_mex.mki
echo COMPILER=%COMPILER%>> dispointsQP_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> dispointsQP_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> dispointsQP_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> dispointsQP_mex.mki
echo LINKER=%LINKER%>> dispointsQP_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> dispointsQP_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> dispointsQP_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> dispointsQP_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> dispointsQP_mex.mki
echo BORLAND=%BORLAND%>> dispointsQP_mex.mki
echo OMPFLAGS= >> dispointsQP_mex.mki
echo OMPLINKFLAGS= >> dispointsQP_mex.mki
echo EMC_COMPILER=msvcsdk>> dispointsQP_mex.mki
echo EMC_CONFIG=optim>> dispointsQP_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f dispointsQP_mex.mk
