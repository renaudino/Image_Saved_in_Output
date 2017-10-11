@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=dsfield
set MEX_NAME=dsfield
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for dsfield > dsfield_mex.mki
echo COMPILER=%COMPILER%>> dsfield_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> dsfield_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> dsfield_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> dsfield_mex.mki
echo LINKER=%LINKER%>> dsfield_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> dsfield_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> dsfield_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> dsfield_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> dsfield_mex.mki
echo BORLAND=%BORLAND%>> dsfield_mex.mki
echo OMPFLAGS= >> dsfield_mex.mki
echo OMPLINKFLAGS= >> dsfield_mex.mki
echo EMC_COMPILER=msvcsdk>> dsfield_mex.mki
echo EMC_CONFIG=optim>> dsfield_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f dsfield_mex.mk
