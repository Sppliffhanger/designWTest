/********************************************************************
 * COPYRIGHT -- B&R Industrial Automation GmbH
 ********************************************************************
 * Program: testProject
 * File: testProject_private.h
 * Author: stadelmanj
 * Last modified by: stadelmanj
 * Created: Tue Sep 26 07:43:19 2023
 * Last modified: Tue Oct 03 14:36:03 2023
 * Model Version: 1.11
 * Description:
 * modified Comment:
 ********************************************************************
 * Header for program testProject
 ********************************************************************
 * Generated with B&R Automation Studio Target for Simulink V6.8.0
 * (ERT based)
 ********************************************************************/

#ifndef RTW_HEADER_testProject_private_h_
#define RTW_HEADER_testProject_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#define _ASMATH_
#define ASMATH_
#define _ASMATH_H
#define ASMATH_H
#define _ASMATH_H_
#define ASMATH_H_
#define _ASSTRING_
#define ASSTRING_
#define _ASSTRING_H
#define ASSTRING_H
#define _ASSTRING_H_
#define ASSTRING_H_
#include <bur/plctypes.h>
#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

#include "testProject_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef MIN
#define MIN(a,b)                       ((a) < (b) ? (a) : (b))
#endif

#ifndef MAX
#define MAX(a,b)                       ((a) > (b) ? (a) : (b))
#endif

#ifndef AST_ROUND
#define AST_ROUND(x)                   ((x)>=0?(long long)((x)+0.5):(long long)((x)-0.5))
#endif

/* Imported (extern) block parameters */
extern real32_T gain;                  /* Variable: gain
                                        * Referenced by: '<Root>/Gain'
                                        */

#endif                                 /* RTW_HEADER_testProject_private_h_ */
