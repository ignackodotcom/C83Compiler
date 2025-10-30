/******************************************************************************
* \file      PCmplr.h
* \version   2026.01.01
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Compiler identification macros
* \details
*
* \see       https://github.com/ignackodotcom
*			 https://github.com/cpredef/predef
*            https://en.wikipedia.org/wiki/List_of_compilers
*            https://en.wikipedia.org/wiki/Category:C_(programming_language)_compilers
*            https://en.wikipedia.org/wiki/Category:C++_compilers
*            https://en.wikibooks.org/wiki/C_Programming/C_Compilers_Reference_List
*            https://copilot.microsoft.com/
*            https://chatgpt.com/
*            https://deepai.org/chat
*            and other resources
* 
* \note      It is completely impossible to fully test all compiler combinations, 
*            so this library is not fully tested. If you have any improvements, 
*            please feel free to contact me at ignacko.com@outlook.com
******************************************************************************/

#ifndef PCMPLR_H
#define PCMPLR_H      20260101L



/******************************************************************************
*******************************************************************************
** 0-9
*******************************************************************************
******************************************************************************/

/******************************************************************************
** 8CC Compiler
*/
#define COMPILER_8CC                    1
#define COMPILER_8CC_NAME               "8CC Compiler"

#if defined(__8CC__) || defined(__8cc__)
 #define COMPILER                       COMPILER_8CC
 #define COMPILER_NAME                  COMPILER_8CC_NAME
#endif



/******************************************************************************
*******************************************************************************
** A
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Acorn C/C++ Compiler
**
** Acorn C/C++ does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using Acorn C/C++ in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__ACORN__=1234 or -D__ACORN__).
*/
#define COMPILER_ACORN_C                COMPILER_8CC + 1
#define COMPILER_ACORN_C_NAME           "Acorn C Compiler"

#define COMPILER_ACORN_CPP              COMPILER_ACORN_C + 1
#define COMPILER_ACORN_CPP_NAME         "Acorn C/C++ Compiler"

#if defined(__ACORN_C__) || defined(__acorn_c__)
 #define COMPILER                       COMPILER_ACORN_C
 #define COMPILER_NAME                  COMPILER_ACORN_C_NAME
#elif defined(__ACORN__) || defined(__acorn__) || defined(__ACORN) || defined(__acorn)
 #define COMPILER                       COMPILER_ACORN_CPP
 #define COMPILER_NAME                  COMPILER_ACORN_CPP_NAME
#endif


/******************************************************************************
** Altium C Compiler (ACC)
*/
#define COMPILER_ALTIUM_C               COMPILER_ACORN_CPP + 1
#define COMPILER_ALTIUM_C_NAME          "Altium C Compiler (ACC)"

#if defined(__CHC__) || defined(_ACC_) || defined(__ACC__) || defined(__ALTIUM__) || \
    defined(__CMB__)
 #define COMPILER                       COMPILER_ALTIUM_C
 #define COMPILER_NAME                  COMPILER_ALTIUM_C_NAME
#endif


/******************************************************************************
** AMD Optimizing C/C++ Compiler (AOCC)
*/
#define COMPILER_AMD_OPTIMIZING_CCPP        COMPILER_ALTIUM_C + 1
#define COMPILER_AMD_OPTIMIZING_CCPP_NAME   "AMD Optimizing C/C++ Compiler (AOCC)"

#if !defined(__clang__) && ( \
    defined(__AOCC__) || defined(__aocc__) || \
    defined(__AOC__) || defined(__aoc__) )
 #define COMPILER                       COMPILER_AMD_OPTIMIZING_CCPP
 #define COMPILER_NAME                  COMPILER_AMD_OPTIMIZING_CCPP_NAME
#endif


/******************************************************************************
** Amsterdam Compiler Kit (ACK)
**
** ACK does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using ACK in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__ACK__=1234 or -D__ACK__).
*/
#define COMPILER_AMSTERDAM_COMPILER_KIT         COMPILER_AMD_OPTIMIZING_CCPP + 1
#define COMPILER_AMSTERDAM_COMPILER_KIT_NAME    "Amsterdam Compiler Kit (ACK)"

#if defined(__ACK__) || defined(__ack__)
 #define COMPILER                       COMPILER_AMSTERDAM_COMPILER_KIT
 #define COMPILER_NAME                  COMPILER_AMSTERDAM_COMPILER_KIT_NAME
#endif


/******************************************************************************
** ARM Compiler (ARMCC)
*/
#define COMPILER_ARM                    COMPILER_AMSTERDAM_COMPILER_KIT + 1
#define COMPILER_ARM_NAME               "ARM Compiler (ARMCC)"
#if !defined(__clang__) && defined(__CC_ARM) || defined(__arm__)
 #define COMPILER                       COMPILER_ARM
 #define COMPILER_NAME                  COMPILER_ARM_NAME
#endif


/******************************************************************************
** Aztec C Compiler
**
** Aztec C does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using Aztec C in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__AZTEC_C__=1234 or -D__AZTEC_C__).
*/
#define COMPILER_AZTEC_C                COMPILER_ARM + 1
#define COMPILER_AZTEC_C_NAME           "Aztec C Compiler"

#if defined(AZTEC_C) || defined(_AZTEC_C) || defined(__AZTEC_C__) || defined(__AZTEC__)
 #define COMPILER                       COMPILER_AZTEC_C
 #define COMPILER_NAME                  COMPILER_AZTEC_C_NAME
#endif



/******************************************************************************
*******************************************************************************
** B
*******************************************************************************
******************************************************************************/

/******************************************************************************
** BDS C Compiler
**
** BDS C does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using BDS C in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__BDSC__=1234 or -D__BDSC__).
*/
#define COMPILER_BDS_C                  COMPILER_AZTEC_C + 1
#define COMPILER_BDS_C_NAME             "BDS C Compiler"

#if defined(__BDSC__) || defined(__bdsc__)
 #define COMPILER                       COMPILER_BDS_C
 #define COMPILER_NAME                  COMPILER_BDS_C_NAME
#endif


/******************************************************************************
** Embracadero C++ Builder Compiler
** Borland C++ or C++ Builder classic Compiler
** Turbo C Compiler
*/
#define COMPILER_CPP_BUILDER            COMPILER_BDS_C + 1
#define COMPILER_CPP_BUILDER_NAME       "Embracadero C++ Builder Compiler"

#define COMPILER_BORLAND_CPP            COMPILER_CPP_BUILDER + 1
#define COMPILER_BORLAND_CPP_NAME       "Borland C++ or C++ Builder classic Compiler"

#define COMPILER_TURBO_C                COMPILER_BORLAND_CPP + 1
#define COMPILER_TURBO_C_NAME           "Turbo C Compiler"

#if !defined(__clang__) && !defined(__GNUC__) && !defined(_MSC_VER) && \
    defined(__BORLANDC__) && defined(__CODEGEARC__)
 /* Embarcadero C++ Builder */
 #define COMPILER                       COMPILER_CPP_BUILDER
 #define COMPILER_NAME                  COMPILER_CPP_BUILDER_NAME
#elif !defined(__clang__) && defined(__BORLANDC__)
 /* Borland C++ or C++ Builder classic */
 #define COMPILER                       COMPILER_BORLAND_CPP
 #define COMPILER_NAME                  COMPILER_BORLAND_CPP_NAME
#elif !defined(__clang__) && defined(__TURBOC__)
 /* Turbo C */
 #define COMPILER                       COMPILER_TURBO_C
 #define COMPILER_NAME                  COMPILER_TURBO_C_NAME
#endif



/******************************************************************************
*******************************************************************************
** C
*******************************************************************************
******************************************************************************/

/******************************************************************************
** CC65 Compiler
*/
#define COMPILER_CC65           COMPILER_TURBO_C + 1
#define COMPILER_CC65_NAME      "CC65 Compiler"

#if defined(__CC65__)
 #define COMPILER               COMPILER_CC65
 #define COMPILER_NAME          COMPILER_CC65_NAME
#endif


/******************************************************************************
** CFront C++ Compiler
**
** CFront does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using CFront in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__CFRONT__=1234 or -D__CFRONT__).
*/
#define COMPILER_CFRONT_CPP         COMPILER_CC65 + 1
#define COMPILER_CFRONT_CPP_NAME    "CFront C++ Compiler"

#if defined(__CFRONT__) || defined(CFRONT) || defined(__cfront__) || defined(cfront)
 #define COMPILER               COMPILER_CFRONT_CPP
 #define COMPILER_NAME          COMPILER_CFRONT_CPP_NAME
#endif


/******************************************************************************
** Ch C/C++ Interpreter and scripting environment
*/
#define COMPILER_CH_CCPP        COMPILER_CFRONT_CPP + 1
#define COMPILER_CH_CCPP_NAME   "Ch C/C++ Interpreter and scripting environment"

#if defined(__CH__) || defined(_CH_)
 #define COMPILER               COMPILER_CH_CCPP
 #define COMPILER_NAME          COMPILER_CH_CCPP_NAME
#endif


/******************************************************************************
** CINT C/C++ Interpreter
*/
#define COMPILER_CINT_CCPP      COMPILER_CH_CCPP + 1
#define COMPILER_CINT_CCPP_NAME "CINT C/C++ Interpreter"

#if defined(__CINT__)
 #define COMPILER               COMPILER_CINT_CCPP
 #define COMPILER_NAME          COMPILER_CINT_CCPP_NAME
#endif


/******************************************************************************
** Clang Compiler
*/
#define COMPILER_CLANG          COMPILER_CINT_CCPP + 1
#define COMPILER_CLANG_NAME     "Clang Compiler"

#if defined(__clang__)
 #define COMPILER               COMPILER_CLANG
 #define COMPILER_NAME          COMPILER_CLANG_NAME
#endif


/******************************************************************************
** Cling C++ Interpreter
*/
#define COMPILER_CLING_CPP      COMPILER_CLANG + 1
#define COMPILER_CLING_CPP_NAME "Cling C++ Interpreter"

#if !defined(__clang__) && defined(__CLING__)
 #define COMPILER               COMPILER_CLING_CPP
 #define COMPILER_NAME          COMPILER_CLING_CPP_NAME
#endif


/******************************************************************************
** Comeau C/C++ Compiler
*/
#define COMPILER_COMEAU_CCPP        COMPILER_CLING_CPP + 1
#define COMPILER_COMEAU_CCPP_NAME   "Comeau C/C++ Compiler"

#if defined(__COMO__) || defined(__COMEAU__)
 #define COMPILER               COMPILER_COMEAU_CCPP
 #define COMPILER_NAME          COMPILER_COMEAU_CCPP_NAME
#endif


/******************************************************************************
** Compaq C/C++ Compiler (formerly Digital C/C++ Compiler)
*/
#define COMPILER_COMPAQ_C           COMPILER_COMEAU_CCPP + 1
#define COMPILER_COMPAQ_C_NAME      "Compaq C Compiler"

#define COMPILER_COMPAQ_CPP         COMPILER_COMPAQ_C + 1
#define COMPILER_COMPAQ_CPP_NAME    "Compaq C++ Compiler"

#if defined(__DECC)
 #define COMPILER               COMPILER_COMPAQ_C
 #define COMPILER_NAME          COMPILER_COMPAQ_C_NAME
#endif

#if defined(__DECCXX)
 #define COMPILER               COMPILER_COMPAQ_CPP
 #define COMPILER_NAME          COMPILER_COMPAQ_CPP_NAME
#endif


/******************************************************************************
** CompCert C Compiler
*/
#define COMPILER_COMPCERT_C         COMPILER_COMPAQ_CPP + 1
#define COMPILER_COMPCERT_C_NAME    "CompCert C Compiler"

#if defined(__COMPCERT__)
 #define COMPILER               COMPILER_COMPCERT_C
 #define COMPILER_NAME          COMPILER_COMPCERT_C_NAME
#endif


/******************************************************************************
** Convex C Compiler
*/
#define COMPILER_CONVEX_C       COMPILER_COMPCERT_C + 1
#define COMPILER_CONVEX_C_NAME  "Convex C Compiler"

#if defined(__CONVEXC__) || defined(__convexc__)
 #define COMPILER               COMPILER_CONVEX_C
 #define COMPILER_NAME          COMPILER_CONVEX_C_NAME
#endif


/******************************************************************************
** Coverity C/C++ Static Analyzer
*/
#define COMPILER_COVERITY_CCPP      COMPILER_CONVEX_C + 1
#define COMPILER_COVERITY_CCPP_NAME "Coverity C/C++ Static Analyzer"

#if !defined(__clang__) && defined(__COVERITY__) || defined(__COVERITY_EDG__)
 #define COMPILER               COMPILER_COVERITY_CCPP
 #define COMPILER_NAME          COMPILER_COVERITY_CCPP_NAME
#endif


/******************************************************************************
** CProc Compiler
**
** CProc does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using CProc in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__CPROC__=1234 or -D__CPROC__).
*/
#define COMPILER_CPROC          COMPILER_COVERITY_CCPP + 1
#define COMPILER_CPROC_NAME     "CProc Compiler"

#if defined(__CPROC__) || defined(__CProc__) || defined(__cproc__)
 #define COMPILER               COMPILER_CPROC
 #define COMPILER_NAME          COMPILER_CPROC_NAME
#endif


/******************************************************************************
** Cray C Compiler
*/
#define COMPILER_CRAY_C         COMPILER_CPROC + 1
#define COMPILER_CRAY_C_NAME    "Cray C Compiler"

#if !defined(__clang__) && \
    defined(__CRAY__) || defined(__cray__) || \
    defined(__CRAYC__) || defined(__crayc__) || \
    defined(_CRAYC) || defined(_crayc) || \
    defined(__CRAYC) || defined(__crayc)
 #define COMPILER               COMPILER_CRAY_C
 #define COMPILER_NAME          COMPILER_CRAY_C_NAME
#endif



/******************************************************************************
*******************************************************************************
** D
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Deep Blue C Compiler
**
** Deep Blue C does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using Deep Blue C in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__DBCC__=1234 or -D__DBCC__).
*/
#define COMPILER_DEEP_BLUE_C        COMPILER_CRAY_C + 1
#define COMPILER_DEEP_BLUE_C_NAME   "Deep Blue C Compiler"

#if defined(__DBCC__) || defined(__dbcc__)
 #define COMPILER               COMPILER_DEEP_BLUE_C
 #define COMPILER_NAME          COMPILER_DEEP_BLUE_C_NAME
#endif


/******************************************************************************
** DESMET C Compiler
*/
#define COMPILER_DESMET_C       COMPILER_DEEP_BLUE_C + 1
#define COMPILER_DESMET_C_NAME  "DESMET C Compiler"

#if defined(__DESMET__)
 #define COMPILER               COMPILER_DESMET_C
 #define COMPILER_NAME          COMPILER_DESMET_C_NAME
#endif


/******************************************************************************
** Diab C/C++ Compiler
*/
#define COMPILER_DIAB_CCPP      COMPILER_DESMET_C + 1
#define COMPILER_DIAB_CCPP_NAME "Diab C/C++ Compiler"

#if defined(__DCC__) || defined(__DIAB__) || defined(__DIAB_COMPILER__)
 #define COMPILER               COMPILER_DIAB_CCPP
 #define COMPILER_NAME          COMPILER_DIAB_CCPP_NAME
#endif


/******************************************************************************
** DICE C Compiler
*/
#define COMPILER_DICE_C         COMPILER_DIAB_CCPP + 1
#define COMPILER_DICE_C_NAME    "DICE C Compiler"

#if defined(_DICE) || defined(__DICE__)
 #define COMPILER               COMPILER_DICE_C
 #define COMPILER_NAME          COMPILER_DICE_C_NAME
#endif


/******************************************************************************
** Digital Mars C/C++ Compiler
*/
#define COMPILER_DIGITAL_MARS_CCPP      COMPILER_DICE_C + 1
#define COMPILER_DIGITAL_MARS_CCPP_NAME "Digital Mars C/C++ Compiler"

#if defined(__DMC__)
 #define COMPILER               COMPILER_DIGITAL_MARS_CCPP
 #define COMPILER_NAME          COMPILER_DIGITAL_MARS_CCPP_NAME
#endif


/******************************************************************************
** Digital Research C Compiler
**
** Digital Research C does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using Digital Research C in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__DRC__=1234 or -D__DRC__).
*/
#define COMPILER_DIGITAL_RESEARCH_C         COMPILER_DIGITAL_MARS_CCPP + 1
#define COMPILER_DIGITAL_RESEARCH_C_NAME    "Digital Research C Compiler"

#if defined(__DRC__)
 #define COMPILER               COMPILER_DIGITAL_RESEARCH_C
 #define COMPILER_NAME          COMPILER_DIGITAL_RESEARCH_C_NAME
#endif


/******************************************************************************
** Dignus Systems/C++ Compiler (DCXX)
*/
#define COMPILER_DIGNUS_SYSTEMS_CPP         COMPILER_DIGITAL_RESEARCH_C + 1
#define COMPILER_DIGNUS_SYSTEMS_CPP_NAME    "Dignus Systems/C++ Compiler (DCXX)"

#if defined(__SYSC__) || defined(SYSC)
 #define COMPILER               COMPILER_DIGNUS_SYSTEMS_CPP
 #define COMPILER_NAME          COMPILER_DIGNUS_SYSTEMS_CPP_NAME
#endif


/******************************************************************************
** DJGPP
*/
#define COMPILER_DJGPP          COMPILER_DIGNUS_SYSTEMS_CPP + 1
#define COMPILER_DJGPP_NAME     "DJGPP"

#if defined(__DJGPP__) || defined(__GO32__)
 #define COMPILER               COMPILER_DJGPP
 #define COMPILER_NAME          COMPILER_DJGPP_NAME
#endif



/******************************************************************************
*******************************************************************************
** E
*******************************************************************************
******************************************************************************/

/******************************************************************************
** EDGE C/C++ Compiler
*/
#define FRONTEND_EDGE_CCPP      COMPILER_DJGPP + 1
#define FRONTEND_EDGE_CCPP_NAME "EDGE C/C++ Compiler"

#if defined(__EDGE__)
 #define COMPILER               FRONTEND_EDGE_CCPP
 #define COMPILER_NAME          FRONTEND_EDGE_CCPP_NAME
#endif


/******************************************************************************
** EKOPath Compiler
*/
#define COMPILER_EKOPATH        FRONTEND_EDGE_CCPP + 1
#define COMPILER_EKOPATH_NAME   "EKOPath Compiler"

#if defined(__PATHSCALE__) || defined(__PATHCC__)
 #define COMPILER               COMPILER_EKOPATH
 #define COMPILER_NAME          COMPILER_EKOPATH_NAME
#endif


/******************************************************************************
** Extensible interactive C Interpreter (EiC)
*/
#define COMPILER_EIC            COMPILER_EKOPATH + 1
#define COMPILER_EIC_NAME       "Extensible interactive C Interpreter (EiC)"

#if defined(__EIC__) || defined(__EiC__) || defined(__eic__) || \
    defined(__EIC) || defined(__EiC) || defined(__eic) || defined(_EiC)
 #define COMPILER               COMPILER_EIC
 #define COMPILER_NAME          COMPILER_EIC_NAME
#endif



/******************************************************************************
*******************************************************************************
** F
*******************************************************************************
******************************************************************************/

/******************************************************************************
** FpgaC
**
** FpgaC does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using FpgaC in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__FPGAC__=1234 or -D__FPGAC__).
*/
#define COMPILER_FPGAC          COMPILER_EIC + 1
#define COMPILER_FPGAC_NAME     "FpgaC"

#if defined(__FPGAC__) || defined(__fpgac__)
 #define COMPILER               COMPILER_FPGAC
 #define COMPILER_NAME          COMPILER_FPGAC_NAME
#endif


/******************************************************************************
** Fujitsu C++
*/
#define COMPILER_FUJITSU_CPP        COMPILER_FPGAC + 1
#define COMPILER_FUJITSU_CPP_NAME   "Fujitsu C++"

#if defined(__FCC_VERSION)
 #define COMPILER               COMPILER_FUJITSU_CPP
 #define COMPILER_NAME          COMPILER_FUJITSU_CPP_NAME
#endif



/******************************************************************************
*******************************************************************************
** G
*******************************************************************************
******************************************************************************/

/******************************************************************************
** GCC (GNU Compiler Collection) C/C++ Compiler
*/
#define COMPILER_GCC_CCPP       COMPILER_FUJITSU_CPP + 1
#define COMPILER_GCC_CCPP_NAME  "GCC C/C++ Compiler"

#if !defined(__clang__) && defined(__GNUC__)
 #define COMPILER               COMPILER_GCC_CCPP
 #define COMPILER_NAME          COMPILER_GCC_CCPP_NAME
#endif


/******************************************************************************
** Green Hill C/C++ Compiler
*/
#define COMPILER_GREEN_HILL_CCPP        COMPILER_GCC_CCPP + 1
#define COMPILER_GREEN_HILL_CCPP_NAME   "Green Hill C/C++ Compiler"

#if defined(__ghs__) || defined(__ghs)
 #define COMPILER               COMPILER_GREEN_HILL_CCPP
 #define COMPILER_NAME          COMPILER_GREEN_HILL_CCPP_NAME
#endif



/******************************************************************************
*******************************************************************************
** H
*******************************************************************************
******************************************************************************/

/******************************************************************************
** HP aC++ Compiler
*/
#define COMPILER_HP_ACPP        COMPILER_GREEN_HILL_CCPP + 1
#define COMPILER_HP_ACPP_NAME   "HP aC++ Compiler"

#if defined(__HP_aCC)
 #define COMPILER               COMPILER_HP_ACPP
 #define COMPILER_NAME          COMPILER_HP_ACPP_NAME
#endif


/******************************************************************************
** HP ANSI C Compiler
*/
#define COMPILER_HP_ANSI_C      COMPILER_HP_ACPP + 1
#define COMPILER_HP_ANSI_C_NAME "HP ANSI C Compiler"

#if defined(__HP_cc)
 #define COMPILER               COMPILER_HP_ANSI_C
 #define COMPILER_NAME          COMPILER_HP_ANSI_C_NAME
#endif



/******************************************************************************
*******************************************************************************
** I
*******************************************************************************
******************************************************************************/

/******************************************************************************
** IAR C/C++ Compiler
*/
#define COMPILER_IAR_CCPP       COMPILER_HP_ANSI_C + 1
#define COMPILER_IAR_CCPP_NAME  "IAR C/C++ Compiler"

#if defined(__IAR_SYSTEMS_ICC__)
 #define COMPILER               COMPILER_IAR_CCPP
 #define COMPILER_NAME          COMPILER_IAR_CCPP_NAME
#endif


/******************************************************************************
** IBM XL C/C++ Compiler (Legacy version)
*/
#define COMPILER_IBM_XL_C           COMPILER_IAR_CCPP + 1
#define COMPILER_IBM_XL_C_NAME      "IBM XL C Compiler (Legacy version)"

#define COMPILER_IBM_XL_CPP         COMPILER_IBM_XL_C + 1
#define COMPILER_IBM_XL_CPP_NAME    "IBM XL C++ Compiler (Legacy version)"

#if defined(__IBMC__) || defined(__xlc__)
 #define COMPILER               COMPILER_IBM_XL_C
 #define COMPILER_NAME          COMPILER_IBM_XL_C_NAME
#endif

#if defined(__IBMCPP__) || defined(__xlC__)
 #define COMPILER               COMPILER_IBM_XL_CPP
 #define COMPILER_NAME          COMPILER_IBM_XL_CPP_NAME
#endif


/******************************************************************************
** ImageCraft C Compiler
*/
#define COMPILER_IMAGECRAFT_C       COMPILER_IBM_XL_CPP + 1
#define COMPILER_IMAGECRAFT_C_NAME  "ImageCraft C Compiler"

#if defined(__IMAGECRAFT__)
 #define COMPILER               COMPILER_IMAGECRAFT_C
 #define COMPILER_NAME          COMPILER_IMAGECRAFT_C_NAME
#endif


/******************************************************************************
** Impulse C Compiler
**
** Impulse C does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using Impulse C in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__IMPULSE__=1234 or -D__IMPULSE__).
*/
#define COMPILER_IMPULSE_C      COMPILER_IMAGECRAFT_C + 1
#define COMPILER_IMPULSE_C_NAME "Impulse C Compiler"

#if defined(__IMPULSE__) || defined(__IMPULSEC__) || defined(__IMPULSE_C__)
 #define COMPILER               COMPILER_IMPULSE_C
 #define COMPILER_NAME          COMPILER_IMPULSE_C_NAME
#endif


/******************************************************************************
** Intel C/C++ Compiler
*/
#define COMPILER_INTEL_CCPP             COMPILER_IMPULSE_C + 1
#define COMPILER_INTEL_CCPP_NAME        "Intel C/C++ Compiler"

#if !defined(__clang__) && \
    defined(__INTEL_COMPILER) || defined(__ICC) || defined(__ECC) || defined(__ICL)
 #define COMPILER               COMPILER_INTEL_CCPP
 #define COMPILER_NAME          COMPILER_INTEL_CCPP_NAME
#endif


/******************************************************************************
** Interactive C Compiler
**
** Interactive C does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using Interactive C in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__INTERACTIVE__=1234 or -D__INTERACTIVE__).
*/
#define COMPILER_INTERACTIVE_C      COMPILER_INTEL_CCPP + 1
#define COMPILER_INTERACTIVE_C_NAME "Interactive C Compiler"

#if defined(__INTERACTIVE__)
 #define COMPILER               COMPILER_INTERACTIVE_C
 #define COMPILER_NAME          COMPILER_INTERACTIVE_C_NAME
#endif



/******************************************************************************
*******************************************************************************
** J
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** K
*******************************************************************************
******************************************************************************/

/******************************************************************************
** KAI C++ Compiler
*/
#define COMPILER_KAI_CPP        COMPILER_INTERACTIVE_C + 1
#define COMPILER_KAI_CPP_NAME   "KAI C++ Compiler"

#if defined(__KCC) || defined(__KAI__)
 #define COMPILER               COMPILER_KAI_CPP
 #define COMPILER_NAME          COMPILER_KAI_CPP_NAME
#endif


/******************************************************************************
** Keil C/C++ Compiler
*/
#define COMPILER_KEIL_CCPP              COMPILER_KAI_CPP + 1
#define COMPILER_KEIL_CCPP_NAME         "Keil C/C++ Compiler"

#if !defined(__clang__) && !defined(__ARMCLANG__) && \
    defined(__KEIL__) || defined(__CA__) || \
    defined(__C51__) || defined(__CX51__) || defined(__C251__) || \
    defined(__C166__)
 #define COMPILER               COMPILER_KEIL_CCPP
 #define COMPILER_NAME          COMPILER_KEIL_CCPP_NAME
#endif



/******************************************************************************
*******************************************************************************
** L
*******************************************************************************
******************************************************************************/

/******************************************************************************
** LabWindows/CVI Compiler
*/
#define COMPILER_CVI            COMPILER_KEIL_CCPP + 1
#define COMPILER_CVI_NAME       "LabWindows/CVI Compiler"

#if !defined(__clang__) && defined(__CVI__)
 #define COMPILER               COMPILER_CVI
 #define COMPILER_NAME          COMPILER_CVI_NAME
#endif


/******************************************************************************
** Lattice C Compiler
**
** Lattice C does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using Lattice C in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__LATTICE__=1234 or -D__LATTICE__).
*/
#define COMPILER_LATTICE_C      COMPILER_CVI + 1
#define COMPILER_LATTICE_C_NAME "Lattice C Compiler"

#if defined(__LATTICE__) || defined(__lattice__)
 #define COMPILER               COMPILER_LATTICE_C
 #define COMPILER_NAME          COMPILER_LATTICE_C_NAME
#endif


/******************************************************************************
** LCC Compiler
*/
#define COMPILER_LCC            COMPILER_LATTICE_C + 1
#define COMPILER_LCC_NAME       "LCC Compiler"

#if defined(__LCC__)
 #define COMPILER               COMPILER_LCC
 #define COMPILER_NAME          COMPILER_LCC_NAME
#endif



/******************************************************************************
*******************************************************************************
** M
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Macintosh Programmer's Workshop C/C++ Compiler
*/
#define COMPILER_MPW_CCPP       COMPILER_LCC + 1
#define COMPILER_MPW_CCPP_NAME  "MPW C/C++ Compiler"

#if defined(__MRC__) || defined(__MPW__) || defined(MPW_C) || defined(MPW_CPLUS)
 #define COMPILER               COMPILER_MPW_CCPP
 #define COMPILER_NAME          COMPILER_MPW_CCPP_NAME
#endif


/******************************************************************************
** Mark Williams C Compiler
*/
#define COMPILER_MW_C           COMPILER_MPW_CCPP + 1
#define COMPILER_MW_C_NAME      "Mark Williams C Compiler"

#if defined(__MWC__) || defined(MWC)
 #define COMPILER               COMPILER_MW_C
 #define COMPILER_NAME          COMPILER_MW_C_NAME
#endif


/******************************************************************************
** MCP C Compiler
**
** MCP C does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using MCP C in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__MCP__=1234 or -D__MCP__).
*/
#define COMPILER_MCP_C          COMPILER_MW_C + 1
#define COMPILER_MCP_C_NAME     "MCP C Compiler"

#if defined(__MCP__) || defined(MCP)
 #define COMPILER               COMPILER_MCP_C
 #define COMPILER_NAME          COMPILER_MCP_C_NAME
#endif


/******************************************************************************
** MCST lcc C Compiler
*/
#define COMPILER_MCST_C         COMPILER_MCP_C + 1
#define COMPILER_MCST_C_NAME    "MCST lcc C Compiler"

#if defined(__MCST__)
 #define COMPILER               COMPILER_MCST_C
 #define COMPILER_NAME          COMPILER_MCST_C_NAME
#endif


/******************************************************************************
** Megamax C Compiler
**
** Megamax C does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using Megamax C in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__MEGAMAX__=1234 or -D__MEGAMAX__).
*/
#define COMPILER_MEGAMAX_C      COMPILER_MCST_C + 1
#define COMPILER_MEGAMAX_C_NAME "Megamax C Compiler"

#if defined(__MEGAMAX__) || defined(MEGAMAX_C)
 #define COMPILER               COMPILER_MEGAMAX_C
 #define COMPILER_NAME          COMPILER_MEGAMAX_C_NAME
#endif


/******************************************************************************
** MetaWare High C/C++ Compiler
*/
#define COMPILER_METAWARE_HIGH_CCPP         COMPILER_MEGAMAX_C + 1
#define COMPILER_METAWARE_HIGH_CCPP_NAME    "MetaWare High C/C++ Compiler"

#if defined(__HIGHC__)
 #define COMPILER               COMPILER_METAWARE_HIGH_CCPP
 #define COMPILER_NAME          COMPILER_METAWARE_HIGH_CCPP_NAME
#endif


/******************************************************************************
** Metrowerks CodeWarrior C/C++ Compiler
*/
#define COMPILER_METROWERKS_CODEWARRIOR_CCPP        COMPILER_METAWARE_HIGH_CCPP + 1
#define COMPILER_METROWERKS_CODEWARRIOR_CCPP_NAME   "Metrowerks CodeWarrior C/C++ Compiler"

#if defined(__MWERKS__)
 #define COMPILER               COMPILER_METROWERKS_CODEWARRIOR_CCPP
 #define COMPILER_NAME          COMPILER_METROWERKS_CODEWARRIOR_CCPP_NAME
#endif


/******************************************************************************
** MicroC Compiler
**
** MicroC does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using MicroC in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__MICROC__=1234 or -D__MICROC__).
*/
#define COMPILER_MICROC         COMPILER_METROWERKS_CODEWARRIOR_CCPP + 1
#define COMPILER_MICROC_NAME    "MicroC Compiler"

#if defined(__MICROC__)
 #define COMPILER               COMPILER_MICROC
 #define COMPILER_NAME          COMPILER_MICROC_NAME
#endif


/******************************************************************************
** Microsoft Visual C/C++ Compiler
*/
#define COMPILER_MICROSOFT_VISUAL_CCPP      COMPILER_MICROC + 1
#define COMPILER_MICROSOFT_VISUAL_CCPP_NAME "Microsoft Visual C/C++ Compiler"

#if !defined(__clang__) && defined(_MSC_VER)
 #define COMPILER               COMPILER_MICROSOFT_VISUAL_CCPP
 #define COMPILER_NAME          COMPILER_MICROSOFT_VISUAL_CCPP_NAME
#endif


/******************************************************************************
** Microtec C/C++ Compiler
*/
#define COMPILER_MICROTEC_CCPP      COMPILER_MICROSOFT_VISUAL_CCPP + 1
#define COMPILER_MICROTEC_CCPP_NAME "Microtec C/C++ Compiler"

#if defined(_MRI) || defined(_MICROTEC) || \
    defined(__MICROTEC__) || defined(__MICROTEC_C__ ) || defined(__MICROTEC_CPP__)
 #define COMPILER               COMPILER_MICROTEC_CCPP
 #define COMPILER_NAME          COMPILER_MICROTEC_CCPP_NAME
#endif


/******************************************************************************
** Microway NDP C Compiler
*/
#define COMPILER_MICROWAY_NDP_C         COMPILER_MICROTEC_CCPP + 1
#define COMPILER_MICROWAY_NDP_C_NAME    "Microway NDP C Compiler"

#if defined(__NDPC__) || defined(__NDPX__)
 #define COMPILER               COMPILER_MICROWAY_NDP_C
 #define COMPILER_NAME          COMPILER_MICROWAY_NDP_C_NAME
#endif


/******************************************************************************
** MINGW 32 Compiler
*/
#define COMPILER_MINGW32        COMPILER_MICROWAY_NDP_C + 1
#define COMPILER_MINGW32_NAME   "MINGW 32 Compiler"

#if defined(__MINGW32__)
 #define COMPILER               COMPILER_MINGW32
 #define COMPILER_NAME          COMPILER_MINGW32_NAME
#endif


/******************************************************************************
** MINGW 64 Compiler
*/
#define COMPILER_MINGW64        COMPILER_MINGW32 + 1
#define COMPILER_MINGW64_NAME   "MINGW 64 Compiler"

#if defined(__MINGW64__)
 #define COMPILER               COMPILER_MINGW64
 #define COMPILER_NAME          COMPILER_MINGW64_NAME
#endif


/******************************************************************************
** MIPSpro Compiler
*/
#define COMPILER_MIPSPRO        COMPILER_MINGW64 + 1
#define COMPILER_MIPSPRO_NAME   "MIPSpro Compiler"

#if defined(__sgi) || defined(sgi)
 #define COMPILER               COMPILER_MIPSPRO
 #define COMPILER_NAME          COMPILER_MIPSPRO_NAME
#endif


/******************************************************************************
** Miracle C Compiler
*/
#define COMPILER_MIRACLE_C      COMPILER_MIPSPRO + 1
#define COMPILER_MIRACLE_C_NAME "Miracle C Compiler"

#if defined(MIRACLE)
 #define COMPILER               COMPILER_MIRACLE_C
 #define COMPILER_NAME          COMPILER_MIRACLE_C_NAME
#endif



/******************************************************************************
*******************************************************************************
** N
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Norcroft C Compiler
*/
#define COMPILER_NORCROFT_C         COMPILER_MIRACLE_C + 1
#define COMPILER_NORCROFT_C_NAME    "Norcroft C Compiler"

#if defined(__CC_NORCROFT)
 #define COMPILER               COMPILER_NORCROFT_C
 #define COMPILER_NAME          COMPILER_NORCROFT_C_NAME
#endif


/******************************************************************************
** NVHPC Compiler
*/
#define COMPILER_NVHPC          COMPILER_NORCROFT_C + 1
#define COMPILER_NVHPC_NAME     "NVHPC Compiler"

#if defined(__NVCOMPILER)
 #define COMPILER               COMPILER_NVHPC
 #define COMPILER_NAME          COMPILER_NVHPC_NAME
#endif


/******************************************************************************
** NWCC Compiler
*/
#define COMPILER_NWCC           COMPILER_NVHPC + 1
#define COMPILER_NWCC_NAME      "NWCC Compiler"

#if defined(__NWCC__)
 #define COMPILER               COMPILER_NWCC
 #define COMPILER_NAME          COMPILER_NWCC_NAME
#endif



/******************************************************************************
*******************************************************************************
** O
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Open64 Compiler
*/
#define COMPILER_OPEN64         COMPILER_NWCC + 1
#define COMPILER_OPEN64_NAME    "Open64 Compiler"

#if defined(__OPEN64__) || defined(__OPENCC__)
 #define COMPILER               COMPILER_OPEN64
 #define COMPILER_NAME          COMPILER_OPEN64_NAME
#endif


/******************************************************************************
** Oracle Pro*C Precompiler
*/
#define COMPILER_ORACLE_PROC        COMPILER_OPEN64 + 1
#define COMPILER_ORACLE_PROC_NAME   "Oracle Pro*C Precompiler"

#if defined(ORA_PROC)
 #define COMPILER               COMPILER_ORACLE_PROC
 #define COMPILER_NAME          COMPILER_ORACLE_PROC_NAME
#endif


/******************************************************************************
** Oracle Solaris Studio C/C++ Compiler
*/
#define COMPILER_ORACLE_C           COMPILER_ORACLE_PROC + 1
#define COMPILER_ORACLE_C_NAME      "Oracle Solaris Studio C Compiler"

#define COMPILER_ORACLE_CPP         COMPILER_ORACLE_C + 1
#define COMPILER_ORACLE_CPP_NAME    "Oracle Solaris Studio C++ Compiler"

#if defined(__SUNPRO_C)
 #define COMPILER               COMPILER_ORACLE_C
 #define COMPILER_NAME          COMPILER_ORACLE_C_NAME
#endif

#if defined(__SUNPRO_CC)
 #define COMPILER               COMPILER_ORACLE_CPP
 #define COMPILER_NAME          COMPILER_ORACLE_CPP_NAME
#endif


/******************************************************************************
** Orange C Compiler
*/
#define COMPILER_ORANGE_C       COMPILER_ORACLE_CPP + 1
#define COMPILER_ORANGE_C_NAME  "Orange C Compiler"

#if defined(__ORANGEC__)
 #define COMPILER               COMPILER_ORANGE_C
 #define COMPILER_NAME          COMPILER_ORANGE_C_NAME
#endif



/******************************************************************************
*******************************************************************************
** P
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Pacific C Compiler
*/
#define COMPILER_PACIFIC_C      COMPILER_ORANGE_C + 1
#define COMPILER_PACIFIC_C_NAME "Pacific C Compiler"

#if defined(__PACIFIC__)
 #define COMPILER               COMPILER_PACIFIC_C
 #define COMPILER_NAME          COMPILER_PACIFIC_C_NAME
#endif


/******************************************************************************
** Palm C/C++ Compiler
*/
#define COMPILER_PALM_CCPP      COMPILER_PACIFIC_C + 1
#define COMPILER_PALM_CCPP_NAME "Palm C/C++ Compiler"

#if defined(_PACC_VER)
 #define COMPILER               COMPILER_PALM_CCPP
 #define COMPILER_NAME          COMPILER_PALM_CCPP_NAME
#endif


/******************************************************************************
** PathScale C/C++ Compiler
*/
#define COMPILER_PATHSCALE_CCPP         COMPILER_PALM_CCPP + 1
#define COMPILER_PATHSCALE_CCPP_NAME    "PathScale C/C++ Compiler"

#if defined(__PATHSCALE__) || defined(__PATHCC__)
 #define COMPILER               COMPILER_PATHSCALE_CCPP
 #define COMPILER_NAME          COMPILER_PATHSCALE_CCPP_NAME
#endif


/******************************************************************************
** Pelles C Compiler
*/
#define COMPILER_PELLES_C       COMPILER_PATHSCALE_CCPP + 1
#define COMPILER_PELLES_C_NAME  "Pelles C Compiler"

#if defined(__POCC__)
 #define COMPILER               COMPILER_PELLES_C
 #define COMPILER_NAME          COMPILER_PELLES_C_NAME
#endif


/******************************************************************************
** Pico C Interpreter
**
** Pico C does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using Pico C in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -__PICOC__=1234 or -__PICOC__).
*/
#define COMPILER_PICO_C         COMPILER_PELLES_C + 1
#define COMPILER_PICO_C_NAME    "Pico C Compiler"

#if defined(__PICOC__)
 #define COMPILER               COMPILER_PICO_C
 #define COMPILER_NAME          COMPILER_PICO_C_NAME
#endif


/******************************************************************************
** Portable C Compiler
*/
#define COMPILER_PORTABLE_C         COMPILER_PICO_C + 1
#define COMPILER_PORTABLE_C_NAME    "Portable C Compiler"

#if defined(__PCC__)
 #define COMPILER               COMPILER_PORTABLE_C
 #define COMPILER_NAME          COMPILER_PORTABLE_C_NAME
#endif


/******************************************************************************
** Portland Group C/C++ Compiler
*/
#define COMPILER_PORTLAND_CCPP      COMPILER_PORTABLE_C + 1
#define COMPILER_PORTLAND_CCPP_NAME "Portland Group C/C++ Compiler"

#if defined(__PGI)
 #define COMPILER               COMPILER_PORTLAND_CCPP
 #define COMPILER_NAME          COMPILER_PORTLAND_CCPP_NAME
#endif


/******************************************************************************
** ProDev WorkShop C compiler
**
** ProDev WorkShop C does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using ProDev WorkShop C in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -__PRODEV__=1234 or -__PRODEV__).
*/
#define COMPILER_PRODEV_C       COMPILER_PORTLAND_CCPP + 1
#define COMPILER_PRODEV_C_NAME  "ProDev WorkShop C compiler"

#if defined(__PRODEV__)
 #define COMPILER               COMPILER_PRODEV_C
 #define COMPILER_NAME          COMPILER_PRODEV_C_NAME
#endif



/******************************************************************************
*******************************************************************************
** Q
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Quick C Compiler
**
** QuickC does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using QuickC in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__QUICKC__=1234 or -D__QUICKC__).
*/
#define COMPILER_QUICK_C        COMPILER_PRODEV_C + 1
#define COMPILER_QUICK_C_NAME   "Quick C Compiler"

#if defined(__QUICKC__)
 #define COMPILER               COMPILER_QUICK_C
 #define COMPILER_NAME          COMPILER_QUICK_C_NAME
#endif



/******************************************************************************
*******************************************************************************
** R
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Renesas C/C++ Compiler
*/
#define COMPILER_RENESAS_CCPP       COMPILER_QUICK_C + 1
#define COMPILER_RENESAS_CCPP_NAME  "Renesas C/C++ Compiler"

#if defined(__RENESAS__) || defined(__HITACHI__)
 #define COMPILER               COMPILER_RENESAS_CCPP
 #define COMPILER_NAME          COMPILER_RENESAS_CCPP_NAME
#endif


/******************************************************************************
** Ritchie C Compiler
**
** Ritchie C does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using Ritchie C in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__RITCHIEC__ = 1234 or -D__RITCHIEC__).
*/
#define COMPILER_RITCHIE_C      COMPILER_RENESAS_CCPP + 1
#define COMPILER_RITCHIE_C_NAME "Ritchie C Compiler"

#if defined(__RITCHIEC__)
 #define COMPILER               COMPILER_RITCHIE_C
 #define COMPILER_NAME          COMPILER_RITCHIE_C_NAME
#endif



/******************************************************************************
*******************************************************************************
** S
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Salford C++ Compiler (SCC)
*/
#define COMPILER_SALFORD_CPP        COMPILER_RITCHIE_C + 1
#define COMPILER_SALFORD_CPP_NAME   "Salford C++ Compiler (SCC)"

#if defined(__SALFORDC__)
 #define COMPILER               COMPILER_SALFORD_CPP
 #define COMPILER_NAME          COMPILER_SALFORD_CPP_NAME
#endif


/******************************************************************************
** SAS/C C++ Compiler
*/
#define COMPILER_SAS_CPP        COMPILER_SALFORD_CPP + 1
#define COMPILER_SAS_CPP_NAME   "SAS/C C++ Compiler"

#if defined(SASC) || defined(__SASC) || defined(__SASC__)
 #define COMPILER               COMPILER_SAS_CPP
 #define COMPILER_NAME          COMPILER_SAS_CPP_NAME
#endif


/******************************************************************************
** SCO OpenServer
*/
#define COMPILER_SCO_OPENSERVER         COMPILER_SAS_CPP + 1
#define COMPILER_SCO_OPENSERVER_NAME    "SCO OpenServer"

#if defined(_SCO_DS)
 #define COMPILER               COMPILER_SCO_OPENSERVER
 #define COMPILER_NAME          COMPILER_SCO_OPENSERVER_NAME
#endif


/******************************************************************************
** SCORE C++ Compiler
**
** SCORE C++ does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using SCORE C++ in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__SCOREC__ = 1234 or -D__SCOREC__).
*/
#define COMPILER_SCORE_CPP      COMPILER_SCO_OPENSERVER + 1
#define COMPILER_SCORE_CPP_NAME "SCORE C++ Compiler"

#if defined(__SCOREC__)
 #define COMPILER               COMPILER_SCORE_CPP
 #define COMPILER_NAME          COMPILER_SCORE_CPP_NAME
#endif


/******************************************************************************
** SEGGER Compiler
*/
#define COMPILER_SEGGER         COMPILER_SCORE_CPP + 1
#define COMPILER_SEGGER_NAME    "SEGGER Compiler"

#if !defined(__GNUC__) && defined(__SEGGER_CC__) || defined(__SEGGER__)
 #define COMPILER               COMPILER_SEGGER
 #define COMPILER_NAME          COMPILER_SEGGER_NAME
#endif


/******************************************************************************
** Small-C Compiler
**
** Small-C does not have standardized predefined macros
** for compiler identification or versioning.
**
** If you're using Small-C in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__SMALLC__ = 1234 or -D__SMALLC__).
*/
#define COMPILER_SMALL_C        COMPILER_SEGGER + 1
#define COMPILER_SMALL_C_NAME   "Small-C Compiler"

#if defined(__SMALLC__) || defined(SMALLC) || defined(_SMALL_C)
 #define COMPILER               COMPILER_SMALL_C
 #define COMPILER_NAME          COMPILER_SMALL_C_NAME
#endif


/******************************************************************************
** Small Device C Compiler (SDCC)
*/
#define COMPILER_SDCC           COMPILER_SMALL_C + 1
#define COMPILER_SDCC_NAME      "Small Device C Compiler (SDCC)"

#if defined(__SDCC) || defined(SDCC)
 #define COMPILER               COMPILER_SDCC
 #define COMPILER_NAME          COMPILER_SDCC_NAME
#endif


/******************************************************************************
** SN Compiler
*/
#define COMPILER_SN             COMPILER_SDCC + 1
#define COMPILER_SN_NAME        "SN Compiler"

#if defined(__SNC__)
 #define COMPILER               COMPILER_SN
 #define COMPILER_NAME          COMPILER_SN_NAME
#endif


/******************************************************************************
** Stratus VOS C Compiler
*/
#define COMPILER_STRATUS_VOS_C      COMPILER_SN + 1
#define COMPILER_STRATUS_VOS_C_NAME "Stratus VOS C Compiler"

#if defined(__VOSC__)
 #define COMPILER               COMPILER_STRATUS_VOS_C
 #define COMPILER_NAME          COMPILER_STRATUS_VOS_C_NAME
#endif


/******************************************************************************
** Symantec C++ Compiler
*/
#define COMPILER_SYMANTEC_CPP       COMPILER_STRATUS_VOS_C + 1
#define COMPILER_SYMANTEC_CPP_NAME  "Symantec C++ Compiler"

#if defined(__SC__)
 #define COMPILER               COMPILER_SYMANTEC_CPP
 #define COMPILER_NAME          COMPILER_SYMANTEC_CPP_NAME
#endif



/******************************************************************************
*******************************************************************************
** T
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Tandem C/C++ Compiler
*/
#define COMPILER_TANDEM_CCPP        COMPILER_SYMANTEC_CPP + 1
#define COMPILER_TANDEM_CCPP_NAME   "Tandem C/C++ Compiler"

#if defined(__TANDEM)
 #define COMPILER               COMPILER_TANDEM_CCPP
 #define COMPILER_NAME          COMPILER_TANDEM_CCPP_NAME
#endif


/******************************************************************************
** Tasking C/C++ Compiler
*/
#define COMPILER_TASKING_CCPP       COMPILER_TANDEM_CCPP + 1
#define COMPILER_TASKING_CCPP_NAME  "Tasking C/C++ Compiler"

#if defined(__TASKING__)
 #define COMPILER               COMPILER_TASKING_CCPP
 #define COMPILER_NAME          COMPILER_TASKING_CCPP_NAME
#endif


/******************************************************************************
** TenDRA C/C++ Compiler
*/
#define COMPILER_TENDRA_CCPP        COMPILER_TASKING_CCPP + 1
#define COMPILER_TENDRA_CCPP_NAME   "TenDRA C/C++ Compiler"

#if defined(__TenDRA__)
 #define COMPILER               COMPILER_TENDRA_CCPP
 #define COMPILER_NAME          COMPILER_TENDRA_CCPP_NAME
#endif


/******************************************************************************
** Texas Instruments C/C++ Compiler
*/
#define COMPILER_TEXAS_INSTRUMENTS_CCPP         COMPILER_TENDRA_CCPP + 1
#define COMPILER_TEXAS_INSTRUMENTS_CCPP_NAME    "Texas Instruments C/C++ Compiler"

#if defined(__TI_COMPILER_VERSION__)
 #define COMPILER               COMPILER_TEXAS_INSTRUMENTS_CCPP
 #define COMPILER_NAME          COMPILER_TEXAS_INSTRUMENTS_CCPP_NAME
#endif


/******************************************************************************
** THINK C Compiler
*/
#define COMPILER_THINK_C        COMPILER_TEXAS_INSTRUMENTS_CCPP + 1
#define COMPILER_THINK_C_NAME   "THINK C Compiler"

#if defined(THINKC3) || defined(THINKC4)
 #define COMPILER               COMPILER_THINK_C
 #define COMPILER_NAME          COMPILER_THINK_C_NAME
#endif


/******************************************************************************
** Tiny C Compiler
*/
#define COMPILER_TINY_C         COMPILER_THINK_C + 1
#define COMPILER_TINY_C_NAME    "Tiny C Compiler"

#if defined(__TINYC__)
 #define COMPILER               COMPILER_TINY_C
 #define COMPILER_NAME          COMPILER_TINY_C_NAME
#endif



/******************************************************************************
*******************************************************************************
** U
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Ultimate C/C++ Compiler
*/
#define COMPILER_ULTIMATE_CCPP      COMPILER_TINY_C + 1
#define COMPILER_ULTIMATE_CCPP_NAME "Ultimate C/C++ Compiler"

#if defined(_UCC)
 #define COMPILER               COMPILER_ULTIMATE_CCPP
 #define COMPILER_NAME          COMPILER_ULTIMATE_CCPP_NAME
#endif


/******************************************************************************
** USL C Compiler
*/
#define COMPILER_USL_C          COMPILER_ULTIMATE_CCPP + 1
#define COMPILER_USL_C_NAME     "USL C Compiler"

#if defined(__USLC__)
 #define COMPILER               COMPILER_USL_C
 #define COMPILER_NAME          COMPILER_USL_C_NAME
#endif



/******************************************************************************
*******************************************************************************
** V
*******************************************************************************
******************************************************************************/

/******************************************************************************
** VBCC Compiler
*/
#define COMPILER_VBCC           COMPILER_USL_C + 1
#define COMPILER_VBCC_NAME      "VBCC Compiler"

#if defined(__VBCC__)
 #define COMPILER               COMPILER_VBCC
 #define COMPILER_NAME          COMPILER_VBCC_NAME
#endif


/******************************************************************************
** VectorC Compiler
*/
#define COMPILER_VECTORC        COMPILER_VBCC + 1
#define COMPILER_VECTORC_NAME   "VectorC Compiler"

#if defined(__VECTORC__)
 #define COMPILER               COMPILER_VECTORC
 #define COMPILER_NAME          COMPILER_VECTORC_NAME
#endif



/******************************************************************************
*******************************************************************************
** W
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Watcom C/C++ Compiler
*/
#define COMPILER_WATCOM_CCPP        COMPILER_VECTORC + 1
#define COMPILER_WATCOM_CCPP_NAME   "Watcom C/C++ Compiler"

#if defined(__WATCOMC__)
 #define COMPILER               COMPILER_WATCOM_CCPP
 #define COMPILER_NAME          COMPILER_WATCOM_CCPP_NAME
#endif


/******************************************************************************
** Whitesmiths C Compiler
*/
#define COMPILER_WHITESMITHS_C      COMPILER_WATCOM_CCPP + 1
#define COMPILER_WHITESMITHS_C_NAME "Whitesmiths C Compiler"

#if defined(__WHITESMITHS__)
 #define COMPILER               COMPILER_WHITESMITHS_C
 #define COMPILER_NAME          COMPILER_WHITESMITHS_C_NAME
#endif



/******************************************************************************
*******************************************************************************
** X
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** Y
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** Z
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Z88DK C Compiler
*/
#define COMPILER_Z88DK_C        COMPILER_WHITESMITHS_C + 1
#define COMPILER_Z88DK_C_NAME   "Z88DK C Compiler"

#if defined(__SCCZ80) || defined(SCCZ80)
 #define COMPILER               COMPILER_Z88DK_C
 #define COMPILER_NAME          COMPILER_Z88DK_C_NAME
#endif


/******************************************************************************
** Zortech C++ Compiler
*/
#define COMPILER_ZORTECH_CPP        COMPILER_Z88DK_C + 1
#define COMPILER_ZORTECH_CPP_NAME   "Zortech C++ Compiler"

#if defined(__ZTC__)
 #define COMPILER               COMPILER_ZORTECH_CPP
 #define COMPILER_NAME          COMPILER_ZORTECH_CPP_NAME
#endif



/******************************************************************************
*******************************************************************************
** COMPILER unknown
*******************************************************************************
******************************************************************************/

#ifndef COMPILER
/* Unknown compiler. */
#define COMPILER                0
#endif /* COMPILER */

#ifndef COMPILER_NAME
/* Unknown compiler name. */
#define COMPILER_NAME           "unknown"
#endif /* COMPILER_NAME */



/******************************************************************************
* Example of use
*
* #if COMPILER == 0
*   #error "Unknown compiler"
* #endif
*
* #if COMPILER == COMPILER_GCC_CCPP
*   ...
*   Gcc compiler code
*   ...
* #elif COMPILER == COMPILER_MICROSOFT_VISUAL_CCPP
*   ...
*   Visual studio compiler code
*   ...
* #else
*   ...
*   other compiler code
*   ...
* #endif
*
*/



#endif /* PCMPLR_H */
