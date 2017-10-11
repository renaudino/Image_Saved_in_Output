@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2012b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2012b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=EffConstruct
set MEX_NAME=EffConstruct
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for EffConstruct > EffConstruct_mex.mki
echo COMPILER=%COMPILER%>> EffConstruct_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> EffConstruct_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> EffConstruct_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> EffConstruct_mex.mki
echo LINKER=%LINKER%>> EffConstruct_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> EffConstruct_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> EffConstruct_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> EffConstruct_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> EffConstruct_mex.mki
echo BORLAND=%BORLAND%>> EffConstruct_mex.mki
echo OMPFLAGS= >> EffConstruct_mex.mki
echo OMPLINKFLAGS= >> EffConstruct_mex.mki
echo EMC_COMPILER=msvcsdk>> EffConstruct_mex.mki
echo EMC_CONFIG=optim>> EffConstruct_mex.mki
"C:\Program Files\MATLAB\R2012b\bin\win64\gmake" -B -f EffConstruct_mex.mk
