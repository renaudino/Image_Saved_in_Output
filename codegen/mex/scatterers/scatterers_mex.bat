@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=scatterers
set MEX_NAME=scatterers
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for scatterers > scatterers_mex.mki
echo COMPILER=%COMPILER%>> scatterers_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> scatterers_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> scatterers_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> scatterers_mex.mki
echo LINKER=%LINKER%>> scatterers_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> scatterers_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> scatterers_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> scatterers_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> scatterers_mex.mki
echo BORLAND=%BORLAND%>> scatterers_mex.mki
echo OMPFLAGS= >> scatterers_mex.mki
echo OMPLINKFLAGS= >> scatterers_mex.mki
echo EMC_COMPILER=msvcsdk>> scatterers_mex.mki
echo EMC_CONFIG=optim>> scatterers_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f scatterers_mex.mk
