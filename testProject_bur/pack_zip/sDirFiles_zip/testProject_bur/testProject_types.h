/********************************************************************
 * COPYRIGHT -- B&R Industrial Automation GmbH
 ********************************************************************
 * Program: testProject
 * File: testProject_types.h
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

#ifndef RTW_HEADER_testProject_types_h_
#define RTW_HEADER_testProject_types_h_
#include "rtwtypes.h"
#ifndef MIN
#define MIN(a,b)                       ((a) < (b) ? (a) : (b))
#endif

#ifndef MAX
#define MAX(a,b)                       ((a) > (b) ? (a) : (b))
#endif

#ifndef AST_ROUND
#define AST_ROUND(x)                   ((x)>=0?(long long)((x)+0.5):(long long)((x)-0.5))
#endif

#ifndef DEFINED_TYPEDEF_FOR_MyInputsType_
#define DEFINED_TYPEDEF_FOR_MyInputsType_

typedef struct {
  real32_T temp1;
  real32_T temp2;
} MyInputsType;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MyOutputType_
#define DEFINED_TYPEDEF_FOR_MyOutputType_

typedef struct {
  real32_T tempOut;
  MyInputsType tempIn;
} MyOutputType;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_testProject RT_MODEL_testProject;

#endif                                 /* RTW_HEADER_testProject_types_h_ */
