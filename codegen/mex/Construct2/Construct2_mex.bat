@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Construct2
set MEX_NAME=Construct2
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for Construct2 > Construct2_mex.mki
echo COMPILER=%COMPILER%>> Construct2_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Construct2_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Construct2_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Construct2_mex.mki
echo LINKER=%LINKER%>> Construct2_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Construct2_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Construct2_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Construct2_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Construct2_mex.mki
echo BORLAND=%BORLAND%>> Construct2_mex.mki
echo OMPFLAGS= >> Construct2_mex.mki
echo OMPLINKFLAGS= >> Construct2_mex.mki
echo EMC_COMPILER=msvcsdk>> Construct2_mex.mki
echo EMC_CONFIG=optim>> Construct2_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f Construct2_mex.mk
