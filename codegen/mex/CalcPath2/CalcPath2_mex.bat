@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=CalcPath2
set MEX_NAME=CalcPath2
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for CalcPath2 > CalcPath2_mex.mki
echo COMPILER=%COMPILER%>> CalcPath2_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> CalcPath2_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> CalcPath2_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> CalcPath2_mex.mki
echo LINKER=%LINKER%>> CalcPath2_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> CalcPath2_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> CalcPath2_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> CalcPath2_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> CalcPath2_mex.mki
echo BORLAND=%BORLAND%>> CalcPath2_mex.mki
echo OMPFLAGS= >> CalcPath2_mex.mki
echo OMPLINKFLAGS= >> CalcPath2_mex.mki
echo EMC_COMPILER=msvcsdk>> CalcPath2_mex.mki
echo EMC_CONFIG=optim>> CalcPath2_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f CalcPath2_mex.mk
