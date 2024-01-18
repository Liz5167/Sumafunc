//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_MifuncMat_api.cpp
//
// Code generation for function 'MifuncMat'
//

// Include files
#include "_coder_MifuncMat_api.h"
#include "_coder_MifuncMat_mex.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131642U,                                              // fVersionInfo
    NULL,                                                 // fErrorFunction
    "MifuncMat",                                          // fFunctionName
    NULL,                                                 // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    NULL                                                  // fSigMem
};

// Function Declarations
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *c,
                               const char_T *identifier);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static const mxArray *emlrt_marshallOut(const real_T u);

// Function Definitions
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *c,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(c), &thisId);
  emlrtDestroyArray(&c);
  return y;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = b_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

void MifuncMat_api(const mxArray *const prhs[2], int32_T nlhs,
                   const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, // site
      NULL, // tls
      NULL  // prev
  };
  real_T a;
  real_T b;
  real_T c;
  real_T d;
  st.tls = emlrtRootTLSGlobal;
  // Marshall function inputs
  c = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "c");
  d = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "d");
  // Invoke the target function
  MifuncMat(c, d, &a, &b);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(a);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(b);
  }
}

void MifuncMat_atexit()
{
  emlrtStack st = {
      NULL, // site
      NULL, // tls
      NULL  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  MifuncMat_xil_terminate();
  MifuncMat_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void MifuncMat_initialize()
{
  emlrtStack st = {
      NULL, // site
      NULL, // tls
      NULL  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

void MifuncMat_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (_coder_MifuncMat_api.cpp)
