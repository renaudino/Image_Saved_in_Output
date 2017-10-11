@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=RefField
set MEX_NAME=RefField
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for RefField > RefField_mex.mki
echo COMPILER=%COMPILER%>> RefField_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> RefField_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> RefField_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> RefField_mex.mki
echo LINKER=%LINKER%>> RefField_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> RefField_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> RefField_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> RefField_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> RefField_mex.mki
echo BORLAND=%BORLAND%>> RefField_mex.mki
echo OMPFLAGS= >> RefField_mex.mki
echo OMPLINKFLAGS= >> RefField_mex.mki
echo EMC_COMPILER=msvcsdk>> RefField_mex.mki
echo EMC_CONFIG=optim>> RefField_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f RefField_mex.mk
