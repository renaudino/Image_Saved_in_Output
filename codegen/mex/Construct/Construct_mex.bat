@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Construct
set MEX_NAME=Construct
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for Construct > Construct_mex.mki
echo COMPILER=%COMPILER%>> Construct_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Construct_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Construct_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Construct_mex.mki
echo LINKER=%LINKER%>> Construct_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Construct_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Construct_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Construct_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Construct_mex.mki
echo BORLAND=%BORLAND%>> Construct_mex.mki
echo OMPFLAGS= >> Construct_mex.mki
echo OMPLINKFLAGS= >> Construct_mex.mki
echo EMC_COMPILER=msvcsdk>> Construct_mex.mki
echo EMC_CONFIG=optim>> Construct_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f Construct_mex.mk
