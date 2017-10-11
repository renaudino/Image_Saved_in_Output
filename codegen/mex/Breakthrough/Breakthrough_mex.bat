@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Breakthrough
set MEX_NAME=Breakthrough
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for Breakthrough > Breakthrough_mex.mki
echo COMPILER=%COMPILER%>> Breakthrough_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Breakthrough_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Breakthrough_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Breakthrough_mex.mki
echo LINKER=%LINKER%>> Breakthrough_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Breakthrough_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Breakthrough_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Breakthrough_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Breakthrough_mex.mki
echo BORLAND=%BORLAND%>> Breakthrough_mex.mki
echo OMPFLAGS= >> Breakthrough_mex.mki
echo OMPLINKFLAGS= >> Breakthrough_mex.mki
echo EMC_COMPILER=msvcsdk>> Breakthrough_mex.mki
echo EMC_CONFIG=optim>> Breakthrough_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f Breakthrough_mex.mk
