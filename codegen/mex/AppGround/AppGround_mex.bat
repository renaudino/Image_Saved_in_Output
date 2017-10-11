@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2012b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2012b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=AppGround
set MEX_NAME=AppGround
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for AppGround > AppGround_mex.mki
echo COMPILER=%COMPILER%>> AppGround_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> AppGround_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> AppGround_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> AppGround_mex.mki
echo LINKER=%LINKER%>> AppGround_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> AppGround_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> AppGround_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> AppGround_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> AppGround_mex.mki
echo BORLAND=%BORLAND%>> AppGround_mex.mki
echo OMPFLAGS= >> AppGround_mex.mki
echo OMPLINKFLAGS= >> AppGround_mex.mki
echo EMC_COMPILER=msvcsdk>> AppGround_mex.mki
echo EMC_CONFIG=optim>> AppGround_mex.mki
"C:\Program Files\MATLAB\R2012b\bin\win64\gmake" -B -f AppGround_mex.mk
