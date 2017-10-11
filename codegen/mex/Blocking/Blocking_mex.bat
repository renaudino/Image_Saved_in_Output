@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Blocking
set MEX_NAME=Blocking
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for Blocking > Blocking_mex.mki
echo COMPILER=%COMPILER%>> Blocking_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Blocking_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Blocking_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Blocking_mex.mki
echo LINKER=%LINKER%>> Blocking_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Blocking_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Blocking_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Blocking_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Blocking_mex.mki
echo BORLAND=%BORLAND%>> Blocking_mex.mki
echo OMPFLAGS= >> Blocking_mex.mki
echo OMPLINKFLAGS= >> Blocking_mex.mki
echo EMC_COMPILER=msvcsdk>> Blocking_mex.mki
echo EMC_CONFIG=optim>> Blocking_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f Blocking_mex.mk
