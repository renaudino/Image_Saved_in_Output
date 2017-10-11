@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=AppFace
set MEX_NAME=AppFace
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for AppFace > AppFace_mex.mki
echo COMPILER=%COMPILER%>> AppFace_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> AppFace_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> AppFace_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> AppFace_mex.mki
echo LINKER=%LINKER%>> AppFace_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> AppFace_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> AppFace_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> AppFace_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> AppFace_mex.mki
echo BORLAND=%BORLAND%>> AppFace_mex.mki
echo OMPFLAGS= >> AppFace_mex.mki
echo OMPLINKFLAGS= >> AppFace_mex.mki
echo EMC_COMPILER=msvcsdk>> AppFace_mex.mki
echo EMC_CONFIG=optim>> AppFace_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f AppFace_mex.mk
