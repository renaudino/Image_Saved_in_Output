@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=RefFieldUP
set MEX_NAME=RefFieldUP
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for RefFieldUP > RefFieldUP_mex.mki
echo COMPILER=%COMPILER%>> RefFieldUP_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> RefFieldUP_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> RefFieldUP_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> RefFieldUP_mex.mki
echo LINKER=%LINKER%>> RefFieldUP_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> RefFieldUP_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> RefFieldUP_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> RefFieldUP_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> RefFieldUP_mex.mki
echo BORLAND=%BORLAND%>> RefFieldUP_mex.mki
echo OMPFLAGS= >> RefFieldUP_mex.mki
echo OMPLINKFLAGS= >> RefFieldUP_mex.mki
echo EMC_COMPILER=msvcsdk>> RefFieldUP_mex.mki
echo EMC_CONFIG=optim>> RefFieldUP_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f RefFieldUP_mex.mk
