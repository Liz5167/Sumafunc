//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_MifuncMat_api.h
//
// Code generation for function 'MifuncMat'
//

#ifndef _CODER_MIFUNCMAT_API_H
#define _CODER_MIFUNCMAT_API_H

// Include files
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void MifuncMat(real_T c, real_T d, real_T *a, real_T *b);

void MifuncMat_api(const mxArray *const prhs[2], int32_T nlhs,
                   const mxArray *plhs[2]);

void MifuncMat_atexit();

void MifuncMat_initialize();

void MifuncMat_terminate();

void MifuncMat_xil_shutdown();

void MifuncMat_xil_terminate();

#endif
// End of code generation (_coder_MifuncMat_api.h)
