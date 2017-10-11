@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=BlockCheck
set MEX_NAME=BlockCheck
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for BlockCheck > BlockCheck_mex.mki
echo COMPILER=%COMPILER%>> BlockCheck_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> BlockCheck_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> BlockCheck_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> BlockCheck_mex.mki
echo LINKER=%LINKER%>> BlockCheck_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> BlockCheck_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> BlockCheck_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> BlockCheck_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> BlockCheck_mex.mki
echo BORLAND=%BORLAND%>> BlockCheck_mex.mki
echo OMPFLAGS= >> BlockCheck_mex.mki
echo OMPLINKFLAGS= >> BlockCheck_mex.mki
echo EMC_COMPILER=msvcsdk>> BlockCheck_mex.mki
echo EMC_CONFIG=optim>> BlockCheck_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f BlockCheck_mex.mk
