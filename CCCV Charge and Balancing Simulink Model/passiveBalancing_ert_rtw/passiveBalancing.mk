###########################################################################
## Makefile generated for component 'passiveBalancing'. 
## 
## Makefile     : passiveBalancing.mk
## Generated on : Mon Jan 04 22:03:46 2021
## Final product: $(RELATIVE_PATH_TO_ANCHOR)\passiveBalancing.exe
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPILER_COMMAND_FILE   Compiler command listing model reference header paths
# CMD_FILE                Command file

PRODUCT_NAME              = passiveBalancing
MAKEFILE                  = passiveBalancing.mk
MATLAB_ROOT               = C:\PROGRA~1\MATLAB\R2020b
MATLAB_BIN                = C:\PROGRA~1\MATLAB\R2020b\bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)\win64
START_DIR                 = X:\Git Repo\passive_cell_balancing\CCCV Charge and Balancing Simulink Model
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = None
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
COMPILER_COMMAND_FILE     = passiveBalancing_comp.rsp
CMD_FILE                  = passiveBalancing.rsp
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
NODEBUG                   = 1
LIBSSC_SLI_ERT_VCX64_OBJS = 
LIBSSC_CORE_ERT_VCX64_OBJS = 
LIBNE_ERT_VCX64_OBJS      = 
LIBMC_ERT_VCX64_OBJS      = 
LIBEX_ERT_VCX64_OBJS      = 
LIBPM_ERT_VCX64_OBJS      = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Microsoft Visual C++ 2019 v16.0 | nmake (64-bit Windows)
# Supported Version(s):    16.0
# ToolchainInfo Version:   2020b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# NODEBUG
# cvarsdll
# cvarsmt
# conlibsmt
# ldebug
# conflags
# cflags

#-----------
# MACROS
#-----------

MW_EXTERNLIB_DIR    = $(MATLAB_ROOT)\extern\lib\win64\microsoft
MW_LIB_DIR          = $(MATLAB_ROOT)\lib\win64
CPU                 = AMD64
APPVER              = 5.02
CVARSFLAG           = $(cvarsmt)
CFLAGS_ADDITIONAL   = -D_CRT_SECURE_NO_WARNINGS
CPPFLAGS_ADDITIONAL = -EHs -D_CRT_SECURE_NO_WARNINGS /wd4251
LIBS_TOOLCHAIN      = $(conlibs)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Microsoft Visual C Compiler
CC = cl

# Linker: Microsoft Visual C Linker
LD = link

# C++ Compiler: Microsoft Visual C++ Compiler
CPP = cl

# C++ Linker: Microsoft Visual C++ Linker
CPP_LD = link

# Archiver: Microsoft Visual C/C++ Archiver
AR = lib

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)\mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: NMAKE Utility
MAKE = nmake


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -Zi
C_OUTPUT_FLAG       = -Fo
LDDEBUG             = /DEBUG
OUTPUT_FLAG         = -out:
CPPDEBUG            = -Zi
CPP_OUTPUT_FLAG     = -Fo
CPPLDDEBUG          = /DEBUG
OUTPUT_FLAG         = -out:
ARDEBUG             =
STATICLIB_OUTPUT_FLAG = -out:
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @ren
RUN                 = @cmd /C

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = /nologo
CFLAGS               = $(cflags) $(CVARSFLAG) $(CFLAGS_ADDITIONAL) \
                       /Od /Oy-
CPPFLAGS             = /TP $(cflags) $(CVARSFLAG) $(CPPFLAGS_ADDITIONAL) \
                       /Od /Oy-
CPP_LDFLAGS          = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
CPP_SHAREDLIB_LDFLAGS  = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                         -dll -def:$(DEF_FILE)
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                       -dll -def:$(DEF_FILE)



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)\passiveBalancing.exe
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = 

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=1
DEFINES_STANDARD = -DMODEL=passiveBalancing -DNUMST=2 -DNCSTATES=3 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0

DEFINES = $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_zc.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_tdxy_p.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_y.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_eq_tol.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_qx_p.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_obs_all.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_obs_exp.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_mode.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_var_tol.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxm_p.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_m.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_log.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_imax.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_obs_act.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_imin.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxicrm_p.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_mdxy_p.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxy_p.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_icrm_p.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_vpf.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_m_p.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxm.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_lv.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dnf_v_x.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_slf.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_tdxf_p.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_a_p.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_slv.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_vmf.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxf_p.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_ic.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_slf0.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxf.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_f.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxicr_p.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_obs_il.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_a.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxdelt_p.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_duf.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_assert.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_gateway.c $(START_DIR)\passiveBalancing_ert_rtw\pm_printf.c $(START_DIR)\passiveBalancing_ert_rtw\rt_backsubrr_dbl.c $(START_DIR)\passiveBalancing_ert_rtw\rt_forwardsubrr_dbl.c $(START_DIR)\passiveBalancing_ert_rtw\rt_lu_real.c $(START_DIR)\passiveBalancing_ert_rtw\rt_matrixlib_dbl.c $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing.c $(START_DIR)\passiveBalancing_ert_rtw\rtGetInf.c $(START_DIR)\passiveBalancing_ert_rtw\rtGetNaN.c $(START_DIR)\passiveBalancing_ert_rtw\rt_nonfinite.c

MAIN_SRC = $(START_DIR)\passiveBalancing_ert_rtw\ert_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = passiveBalancing_836bb176_1_ds.obj passiveBalancing_836bb176_1_ds_zc.obj passiveBalancing_836bb176_1_ds_tdxy_p.obj passiveBalancing_836bb176_1_ds_y.obj passiveBalancing_836bb176_1_ds_eq_tol.obj passiveBalancing_836bb176_1_ds_qx_p.obj passiveBalancing_836bb176_1_ds_obs_all.obj passiveBalancing_836bb176_1_ds_obs_exp.obj passiveBalancing_836bb176_1_ds_mode.obj passiveBalancing_836bb176_1_ds_var_tol.obj passiveBalancing_836bb176_1_ds_dxm_p.obj passiveBalancing_836bb176_1_ds_m.obj passiveBalancing_836bb176_1_ds_log.obj passiveBalancing_836bb176_1_ds_imax.obj passiveBalancing_836bb176_1_ds_obs_act.obj passiveBalancing_836bb176_1_ds_imin.obj passiveBalancing_836bb176_1_ds_dxicrm_p.obj passiveBalancing_836bb176_1_ds_mdxy_p.obj passiveBalancing_836bb176_1_ds_dxy_p.obj passiveBalancing_836bb176_1_ds_icrm_p.obj passiveBalancing_836bb176_1_ds_vpf.obj passiveBalancing_836bb176_1_ds_m_p.obj passiveBalancing_836bb176_1_ds_dxm.obj passiveBalancing_836bb176_1_ds_lv.obj passiveBalancing_836bb176_1_ds_dnf_v_x.obj passiveBalancing_836bb176_1_ds_slf.obj passiveBalancing_836bb176_1_ds_tdxf_p.obj passiveBalancing_836bb176_1_ds_a_p.obj passiveBalancing_836bb176_1_ds_slv.obj passiveBalancing_836bb176_1_ds_vmf.obj passiveBalancing_836bb176_1_ds_dxf_p.obj passiveBalancing_836bb176_1_ds_ic.obj passiveBalancing_836bb176_1_ds_slf0.obj passiveBalancing_836bb176_1_ds_dxf.obj passiveBalancing_836bb176_1_ds_f.obj passiveBalancing_836bb176_1_ds_dxicr_p.obj passiveBalancing_836bb176_1_ds_obs_il.obj passiveBalancing_836bb176_1_ds_a.obj passiveBalancing_836bb176_1_ds_dxdelt_p.obj passiveBalancing_836bb176_1_ds_duf.obj passiveBalancing_836bb176_1_ds_assert.obj passiveBalancing_836bb176_1.obj passiveBalancing_836bb176_1_gateway.obj pm_printf.obj rt_backsubrr_dbl.obj rt_forwardsubrr_dbl.obj rt_lu_real.obj rt_matrixlib_dbl.obj passiveBalancing.obj rtGetInf.obj rtGetNaN.obj rt_nonfinite.obj

MAIN_OBJ = ert_main.obj

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = C:\PROGRA~1\MATLAB\R2020b\toolbox\physmod\simscape\engine\sli\lib\win64\SSB4CD~1.LIB C:\PROGRA~1\MATLAB\R2020b\toolbox\physmod\simscape\engine\core\lib\win64\SSED7A~1.LIB C:\PROGRA~1\MATLAB\R2020b\toolbox\physmod\NETWOR~1\lib\win64\NE544D~1.LIB C:\PROGRA~1\MATLAB\R2020b\toolbox\physmod\common\math\core\lib\win64\MC76CD~1.LIB C:\PROGRA~1\MATLAB\R2020b\toolbox\physmod\common\external\library\lib\win64\EXEFC3~1.LIB C:\PROGRA~1\MATLAB\R2020b\toolbox\physmod\common\FOUNDA~1\core\lib\win64\PMB5CF~1.LIB

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) @$(COMPILER_COMMAND_FILE)

CFLAGS = $(CFLAGS) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS = $(CPPFLAGS) $(CPPFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################


!include $(MATLAB_ROOT)\rtw\c\tools\vcdefs.mak


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute set_environment_variables


all : build
	@cmd /C "@echo ### Successfully generated all binary outputs."


build : set_environment_variables prebuild $(PRODUCT)


buildobj : set_environment_variables prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@cmd /C "@echo ### Successfully generated all binary outputs."


prebuild : 


download : $(PRODUCT)


execute : download
	@cmd /C "@echo ### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@cmd /C "@echo ### Done invoking postbuild tool."


set_environment_variables : 
	@set INCLUDE=$(INCLUDES);$(INCLUDE)
	@set LIB=$(LIB)


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS) $(MAIN_OBJ)
	@cmd /C "@echo ### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -out:$(PRODUCT) @$(CMD_FILE) $(LIBS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@cmd /C "@echo ### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\simscape\engine\sli\c\win64}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\simscape\engine\sli\c\win64}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\simscape\engine\core\c\win64}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\simscape\engine\core\c\win64}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\simscape\compiler\core\c\win64}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\simscape\compiler\core\c\win64}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\network_engine\c\win64}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\network_engine\c\win64}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\common\math\core\c\win64}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\common\math\core\c\win64}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\common\lang\core\c\win64}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\common\lang\core\c\win64}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\common\external\library\c\win64}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\common\external\library\c\win64}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\common\foundation\core\c\win64}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\physmod\common\foundation\core\c\win64}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)\passiveBalancing_ert_rtw}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)\passiveBalancing_ert_rtw}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\rtw\c\src}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\rtw\c\src}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\simulink\src}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\simulink\src}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


passiveBalancing_836bb176_1_ds.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds.c


passiveBalancing_836bb176_1_ds_zc.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_zc.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_zc.c


passiveBalancing_836bb176_1_ds_tdxy_p.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_tdxy_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_tdxy_p.c


passiveBalancing_836bb176_1_ds_y.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_y.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_y.c


passiveBalancing_836bb176_1_ds_eq_tol.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_eq_tol.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_eq_tol.c


passiveBalancing_836bb176_1_ds_qx_p.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_qx_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_qx_p.c


passiveBalancing_836bb176_1_ds_obs_all.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_obs_all.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_obs_all.c


passiveBalancing_836bb176_1_ds_obs_exp.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_obs_exp.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_obs_exp.c


passiveBalancing_836bb176_1_ds_mode.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_mode.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_mode.c


passiveBalancing_836bb176_1_ds_var_tol.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_var_tol.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_var_tol.c


passiveBalancing_836bb176_1_ds_dxm_p.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxm_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxm_p.c


passiveBalancing_836bb176_1_ds_m.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_m.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_m.c


passiveBalancing_836bb176_1_ds_log.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_log.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_log.c


passiveBalancing_836bb176_1_ds_imax.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_imax.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_imax.c


passiveBalancing_836bb176_1_ds_obs_act.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_obs_act.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_obs_act.c


passiveBalancing_836bb176_1_ds_imin.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_imin.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_imin.c


passiveBalancing_836bb176_1_ds_dxicrm_p.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxicrm_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxicrm_p.c


passiveBalancing_836bb176_1_ds_mdxy_p.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_mdxy_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_mdxy_p.c


passiveBalancing_836bb176_1_ds_dxy_p.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxy_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxy_p.c


passiveBalancing_836bb176_1_ds_icrm_p.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_icrm_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_icrm_p.c


passiveBalancing_836bb176_1_ds_vpf.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_vpf.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_vpf.c


passiveBalancing_836bb176_1_ds_m_p.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_m_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_m_p.c


passiveBalancing_836bb176_1_ds_dxm.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxm.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxm.c


passiveBalancing_836bb176_1_ds_lv.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_lv.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_lv.c


passiveBalancing_836bb176_1_ds_dnf_v_x.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dnf_v_x.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dnf_v_x.c


passiveBalancing_836bb176_1_ds_slf.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_slf.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_slf.c


passiveBalancing_836bb176_1_ds_tdxf_p.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_tdxf_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_tdxf_p.c


passiveBalancing_836bb176_1_ds_a_p.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_a_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_a_p.c


passiveBalancing_836bb176_1_ds_slv.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_slv.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_slv.c


passiveBalancing_836bb176_1_ds_vmf.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_vmf.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_vmf.c


passiveBalancing_836bb176_1_ds_dxf_p.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxf_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxf_p.c


passiveBalancing_836bb176_1_ds_ic.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_ic.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_ic.c


passiveBalancing_836bb176_1_ds_slf0.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_slf0.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_slf0.c


passiveBalancing_836bb176_1_ds_dxf.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxf.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxf.c


passiveBalancing_836bb176_1_ds_f.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_f.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_f.c


passiveBalancing_836bb176_1_ds_dxicr_p.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxicr_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxicr_p.c


passiveBalancing_836bb176_1_ds_obs_il.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_obs_il.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_obs_il.c


passiveBalancing_836bb176_1_ds_a.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_a.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_a.c


passiveBalancing_836bb176_1_ds_dxdelt_p.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxdelt_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_dxdelt_p.c


passiveBalancing_836bb176_1_ds_duf.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_duf.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_duf.c


passiveBalancing_836bb176_1_ds_assert.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_assert.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_ds_assert.c


passiveBalancing_836bb176_1.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1.c


passiveBalancing_836bb176_1_gateway.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_gateway.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing_836bb176_1_gateway.c


pm_printf.obj : $(START_DIR)\passiveBalancing_ert_rtw\pm_printf.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\pm_printf.c


rt_backsubrr_dbl.obj : $(START_DIR)\passiveBalancing_ert_rtw\rt_backsubrr_dbl.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\rt_backsubrr_dbl.c


rt_forwardsubrr_dbl.obj : $(START_DIR)\passiveBalancing_ert_rtw\rt_forwardsubrr_dbl.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\rt_forwardsubrr_dbl.c


rt_lu_real.obj : $(START_DIR)\passiveBalancing_ert_rtw\rt_lu_real.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\rt_lu_real.c


rt_matrixlib_dbl.obj : $(START_DIR)\passiveBalancing_ert_rtw\rt_matrixlib_dbl.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\rt_matrixlib_dbl.c


ert_main.obj : $(START_DIR)\passiveBalancing_ert_rtw\ert_main.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\ert_main.c


passiveBalancing.obj : $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\passiveBalancing.c


rtGetInf.obj : $(START_DIR)\passiveBalancing_ert_rtw\rtGetInf.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\rtGetInf.c


rtGetNaN.obj : $(START_DIR)\passiveBalancing_ert_rtw\rtGetNaN.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\rtGetNaN.c


rt_nonfinite.obj : $(START_DIR)\passiveBalancing_ert_rtw\rt_nonfinite.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\passiveBalancing_ert_rtw\rt_nonfinite.c


#------------------------
# BUILDABLE LIBRARIES
#------------------------

C:\PROGRA~1\MATLAB\R2020b\toolbox\physmod\simscape\engine\sli\lib\win64\ssc_sli_ert_vcx64.lib : $(LIBSSC_SLI_ERT_VCX64_OBJS)
	@cmd /C "@echo ### Creating static library $@ ..."
	$(AR) $(ARFLAGS) -out:$@ $(LIBSSC_SLI_ERT_VCX64_OBJS)


C:\PROGRA~1\MATLAB\R2020b\toolbox\physmod\simscape\engine\core\lib\win64\ssc_core_ert_vcx64.lib : $(LIBSSC_CORE_ERT_VCX64_OBJS)
	@cmd /C "@echo ### Creating static library $@ ..."
	$(AR) $(ARFLAGS) -out:$@ $(LIBSSC_CORE_ERT_VCX64_OBJS)


C:\PROGRA~1\MATLAB\R2020b\toolbox\physmod\NETWOR~1\lib\win64\ne_ert_vcx64.lib : $(LIBNE_ERT_VCX64_OBJS)
	@cmd /C "@echo ### Creating static library $@ ..."
	$(AR) $(ARFLAGS) -out:$@ $(LIBNE_ERT_VCX64_OBJS)


C:\PROGRA~1\MATLAB\R2020b\toolbox\physmod\common\math\core\lib\win64\mc_ert_vcx64.lib : $(LIBMC_ERT_VCX64_OBJS)
	@cmd /C "@echo ### Creating static library $@ ..."
	$(AR) $(ARFLAGS) -out:$@ $(LIBMC_ERT_VCX64_OBJS)


C:\PROGRA~1\MATLAB\R2020b\toolbox\physmod\common\external\library\lib\win64\ex_ert_vcx64.lib : $(LIBEX_ERT_VCX64_OBJS)
	@cmd /C "@echo ### Creating static library $@ ..."
	$(AR) $(ARFLAGS) -out:$@ $(LIBEX_ERT_VCX64_OBJS)


C:\PROGRA~1\MATLAB\R2020b\toolbox\physmod\common\FOUNDA~1\core\lib\win64\pm_ert_vcx64.lib : $(LIBPM_ERT_VCX64_OBJS)
	@cmd /C "@echo ### Creating static library $@ ..."
	$(AR) $(ARFLAGS) -out:$@ $(LIBPM_ERT_VCX64_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(COMPILER_COMMAND_FILE) $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@cmd /C "@echo ### PRODUCT = $(PRODUCT)"
	@cmd /C "@echo ### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@cmd /C "@echo ### BUILD_TYPE = $(BUILD_TYPE)"
	@cmd /C "@echo ### INCLUDES = $(INCLUDES)"
	@cmd /C "@echo ### DEFINES = $(DEFINES)"
	@cmd /C "@echo ### ALL_SRCS = $(ALL_SRCS)"
	@cmd /C "@echo ### ALL_OBJS = $(ALL_OBJS)"
	@cmd /C "@echo ### LIBS = $(LIBS)"
	@cmd /C "@echo ### MODELREF_LIBS = $(MODELREF_LIBS)"
	@cmd /C "@echo ### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@cmd /C "@echo ### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@cmd /C "@echo ### CFLAGS = $(CFLAGS)"
	@cmd /C "@echo ### LDFLAGS = $(LDFLAGS)"
	@cmd /C "@echo ### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### CPPFLAGS = $(CPPFLAGS)"
	@cmd /C "@echo ### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@cmd /C "@echo ### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### ARFLAGS = $(ARFLAGS)"
	@cmd /C "@echo ### MEX_CFLAGS = $(MEX_CFLAGS)"
	@cmd /C "@echo ### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@cmd /C "@echo ### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@cmd /C "@echo ### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@cmd /C "@echo ### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@cmd /C "@echo ### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@cmd /C "@echo ### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	@if exist $(PRODUCT) $(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


