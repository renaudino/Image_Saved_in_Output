@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Masking_Olivier_global
set MEX_NAME=Masking_Olivier_global
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for Masking_Olivier_global > Masking_Olivier_global_mex.mki
echo COMPILER=%COMPILER%>> Masking_Olivier_global_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Masking_Olivier_global_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Masking_Olivier_global_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Masking_Olivier_global_mex.mki
echo LINKER=%LINKER%>> Masking_Olivier_global_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Masking_Olivier_global_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Masking_Olivier_global_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Masking_Olivier_global_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Masking_Olivier_global_mex.mki
echo BORLAND=%BORLAND%>> Masking_Olivier_global_mex.mki
echo OMPFLAGS= >> Masking_Olivier_global_mex.mki
echo OMPLINKFLAGS= >> Masking_Olivier_global_mex.mki
echo EMC_COMPILER=msvcsdk>> Masking_Olivier_global_mex.mki
echo EMC_CONFIG=optim>> Masking_Olivier_global_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f Masking_Olivier_global_mex.mk
