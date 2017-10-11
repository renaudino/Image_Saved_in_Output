@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=EffConstruct_Image
set MEX_NAME=EffConstruct_Image
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for EffConstruct_Image > EffConstruct_Image_mex.mki
echo COMPILER=%COMPILER%>> EffConstruct_Image_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> EffConstruct_Image_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> EffConstruct_Image_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> EffConstruct_Image_mex.mki
echo LINKER=%LINKER%>> EffConstruct_Image_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> EffConstruct_Image_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> EffConstruct_Image_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> EffConstruct_Image_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> EffConstruct_Image_mex.mki
echo BORLAND=%BORLAND%>> EffConstruct_Image_mex.mki
echo OMPFLAGS= >> EffConstruct_Image_mex.mki
echo OMPLINKFLAGS= >> EffConstruct_Image_mex.mki
echo EMC_COMPILER=msvcsdk>> EffConstruct_Image_mex.mki
echo EMC_CONFIG=optim>> EffConstruct_Image_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f EffConstruct_Image_mex.mk
