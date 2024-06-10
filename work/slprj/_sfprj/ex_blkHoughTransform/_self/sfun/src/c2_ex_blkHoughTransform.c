/* Include files */

#include "ex_blkHoughTransform_sfun.h"
#include "c2_ex_blkHoughTransform.h"
#include <math.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c2_emlrtMCI = { 87, /* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c2_b_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c2_c_emlrtMCI = { 163,/* lineNo */
  1,                                   /* colNo */
  "imadjust",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\images\\images\\eml\\imadjust.m"/* pName */
};

static emlrtMCInfo c2_d_emlrtMCI = { 161,/* lineNo */
  1,                                   /* colNo */
  "imadjust",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\images\\images\\eml\\imadjust.m"/* pName */
};

static emlrtRSInfo c2_emlrtRSI = { 133,/* lineNo */
  "rescale",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\datafun\\rescale.m"/* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 27,/* lineNo */
  "rescaleKernel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\rescaleKernel.m"/* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 30,/* lineNo */
  "rescaleKernel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\rescaleKernel.m"/* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 12,/* lineNo */
  "pow2",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elfun\\pow2.m"/* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 48,/* lineNo */
  "applyScalarFunction",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 12,/* lineNo */
  "pow2",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+scalar\\pow2.m"/* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 23,/* lineNo */
  "imadjust",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\images\\images\\eml\\imadjust.m"/* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 278,/* lineNo */
  "imadjust",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\images\\images\\eml\\imadjust.m"/* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 22,/* lineNo */
  "imadjust",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\images\\images\\eml\\imadjust.m"/* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 24,/* lineNo */
  "imadjust",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\images\\images\\eml\\imadjust.m"/* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 54,/* lineNo */
  "stretchlim",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\images\\images\\eml\\stretchlim.m"/* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 456,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 297,/* lineNo */
  "imadjust",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\images\\images\\eml\\imadjust.m"/* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 333,/* lineNo */
  "imadjust",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\images\\images\\eml\\imadjust.m"/* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c2_t_emlrtRSI = { 3,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#ex_blkHoughTransform:8"            /* pathName */
};

static emlrtRSInfo c2_u_emlrtRSI = { 4,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#ex_blkHoughTransform:8"            /* pathName */
};

static emlrtRSInfo c2_v_emlrtRSI = { 5,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#ex_blkHoughTransform:8"            /* pathName */
};

static emlrtRSInfo c2_w_emlrtRSI = { 6,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#ex_blkHoughTransform:8"            /* pathName */
};

static emlrtRSInfo c2_x_emlrtRSI = { 9,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#ex_blkHoughTransform:8"            /* pathName */
};

static emlrtRSInfo c2_y_emlrtRSI = { 10,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#ex_blkHoughTransform:8"            /* pathName */
};

static emlrtRSInfo c2_ab_emlrtRSI = { 11,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#ex_blkHoughTransform:8"            /* pathName */
};

static char_T c2_cv[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm', 'h',
  'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N', 'a', 'N',
  's' };

/* Function Declarations */
static void initialize_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void initialize_params_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void mdl_start_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void mdl_terminate_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void enable_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void disable_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void sf_gateway_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void ext_mode_exec_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void c2_update_jit_animation_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void c2_do_animation_call_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void set_sim_state_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance, const mxArray *c2_st);
static void initSimStructsc2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void initSubchartIOPointersc2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void c2_rescaleKernel(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, real_T c2_A[287820], real_T c2_inputMin, real_T c2_inputMax,
  real_T c2_b_A[287820]);
static real_T c2_pow2(SFc2_ex_blkHoughTransformInstanceStruct *chartInstance,
                      real_T c2_a);
static void c2_imadjust(SFc2_ex_blkHoughTransformInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_varargin_1[287820], real_T c2_out[287820]);
static void c2_stretchlim(SFc2_ex_blkHoughTransformInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_varargin_1[287820], real_T c2_lowhigh[2]);
static void c2_imhist(SFc2_ex_blkHoughTransformInstanceStruct *chartInstance,
                      const emlrtStack *c2_sp, real_T c2_varargin_1[287820],
                      real_T c2_yout[65536]);
static void c2_warning(SFc2_ex_blkHoughTransformInstanceStruct *chartInstance,
  const emlrtStack *c2_sp);
static real_T c2_sumColumnB4(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, real_T c2_b_x[65536], int32_T c2_vstart);
static uint8_T c2_emlrt_marshallIn(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const mxArray *c2_nullptr, const char_T *c2_identifier);
static uint8_T c2_b_emlrt_marshallIn(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_slStringInitializeDynamicBuffers
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance);
static void c2_chart_data_browse_helper(SFc2_ex_blkHoughTransformInstanceStruct *
  chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig);
static const mxArray *c2_b_warning(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0, const
  mxArray *c2_input1);
static const mxArray *c2_c_warning(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0);
static const mxArray *c2_feval(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0, const
  mxArray *c2_input1);
static void c2_b_feval(SFc2_ex_blkHoughTransformInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static const mxArray *c2_imshow(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0, const
  mxArray *c2_input1, const mxArray *c2_input2, const mxArray *c2_input3, const
  mxArray *c2_input4, const mxArray *c2_input5, const mxArray *c2_input6);
static const mxArray *c2_title(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0);
static const mxArray *c2_xlabel(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0);
static const mxArray *c2_ylabel(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0);
static const mxArray *c2_axis(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0);
static const mxArray *c2_b_axis(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0);
static const mxArray *c2_hot(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp);
static const mxArray *c2_colormap(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0);
static void c2_b_rescaleKernel(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, real_T c2_A[287820], real_T c2_inputMin, real_T c2_inputMax);
static void init_dsm_address_info(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c2_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_doneDoubleBufferReInit = false;
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, chartInstance->c2_JITStateAnimation,
                        chartInstance->c2_JITTransitionAnimation);
  setDataBrowseFcn(chartInstance->S, (void *)&c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c2_RuntimeVar,
    &chartInstance->c2_IsDebuggerActive,
    &chartInstance->c2_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c2_mlFcnLineNumber, &chartInstance->c2_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    6U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 227);
}

static void mdl_cleanup_runtime_resources_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void enable_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  static char_T c2_cv2[20] = { 'I', 'n', 'i', 't', 'i', 'a', 'l', 'M', 'a', 'g',
    'n', 'i', 'f', 'i', 'c', 'a', 't', 'i', 'o', 'n' };

  static char_T c2_cv4[15] = { 'H', 'o', 'u', 'g', 'h', ' ', 'T', 'r', 'a', 'n',
    's', 'f', 'o', 'r', 'm' };

  static char_T c2_cv5[6] = { '\\', 't', 'h', 'e', 't', 'a' };

  static char_T c2_cv8[6] = { 'n', 'o', 'r', 'm', 'a', 'l' };

  static char_T c2_b_cv[5] = { 'X', 'D', 'a', 't', 'a' };

  static char_T c2_cv1[5] = { 'Y', 'D', 'a', 't', 'a' };

  static char_T c2_cv6[4] = { '\\', 'r', 'h', 'o' };

  static char_T c2_cv3[3] = { 'f', 'i', 't' };

  static char_T c2_cv7[2] = { 'o', 'n' };

  c2_rtString c2_b_obj;
  c2_rtString c2_obj;
  c2_rtString_1 c2_c_obj;
  c2_rtString_2 c2_d_obj;
  c2_rtString_3 c2_e_obj;
  c2_rtString_4 c2_f_obj;
  c2_rtString_5 c2_g_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c2_b_propValues[1];
  const mxArray *c2_c_propValues[1];
  const mxArray *c2_d_propValues[1];
  const mxArray *c2_e_propValues[1];
  const mxArray *c2_f_propValues[1];
  const mxArray *c2_g_propValues[1];
  const mxArray *c2_propValues[1];
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_r_y = NULL;
  const mxArray *c2_s_y = NULL;
  const mxArray *c2_t_y = NULL;
  const mxArray *c2_u_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_h_u[2];
  real_T c2_b_ex;
  real_T c2_b_x;
  real_T c2_c_x;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_ex;
  real_T c2_f_x;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_inputMax;
  real_T c2_inputMin;
  int32_T c2_b_first;
  int32_T c2_b_idx;
  int32_T c2_b_k;
  int32_T c2_c_k;
  int32_T c2_d_k;
  int32_T c2_first;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_idx;
  int32_T c2_k;
  const char_T *c2_b_propClasses[1] = { "coder.internal.string" };

  const char_T *c2_b_propNames[1] = { "Value" };

  const char_T *c2_c_propClasses[1] = { "coder.internal.string" };

  const char_T *c2_c_propNames[1] = { "Value" };

  const char_T *c2_d_propClasses[1] = { "coder.internal.string" };

  const char_T *c2_d_propNames[1] = { "Value" };

  const char_T *c2_e_propClasses[1] = { "coder.internal.string" };

  const char_T *c2_e_propNames[1] = { "Value" };

  const char_T *c2_f_propClasses[1] = { "coder.internal.string" };

  const char_T *c2_f_propNames[1] = { "Value" };

  const char_T *c2_g_propClasses[1] = { "coder.internal.string" };

  const char_T *c2_g_propNames[1] = { "Value" };

  const char_T *c2_propClasses[1] = { "coder.internal.string" };

  const char_T *c2_propNames[1] = { "Value" };

  char_T c2_c_u[20];
  char_T c2_e_u[15];
  char_T c2_f_u[6];
  char_T c2_b_u[5];
  char_T c2_g_u[4];
  char_T c2_d_u[3];
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_c_b;
  boolean_T c2_c_p;
  boolean_T c2_d_b;
  boolean_T c2_d_p;
  boolean_T c2_exitg1;
  boolean_T c2_p;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  for (c2_i = 0; c2_i < 1599; c2_i++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U,
                      (*chartInstance->c2_b_R)[c2_i]);
  }

  for (c2_i1 = 0; c2_i1 < 180; c2_i1++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U, (*chartInstance->c2_T)
                      [c2_i1]);
  }

  for (c2_i2 = 0; c2_i2 < 287820; c2_i2++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U, (*chartInstance->c2_H)
                      [c2_i2]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  chartInstance->c2_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  for (c2_i3 = 0; c2_i3 < 5; c2_i3++) {
    c2_obj.Value[c2_i3] = c2_b_cv[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 5; c2_i4++) {
    c2_b_obj.Value[c2_i4] = c2_cv1[c2_i4];
  }

  for (c2_i5 = 0; c2_i5 < 20; c2_i5++) {
    c2_c_obj.Value[c2_i5] = c2_cv2[c2_i5];
  }

  for (c2_i6 = 0; c2_i6 < 3; c2_i6++) {
    c2_d_obj.Value[c2_i6] = c2_cv3[c2_i6];
  }

  c2_b_st.site = &c2_t_emlrtRSI;
  for (c2_i7 = 0; c2_i7 < 287820; c2_i7++) {
    chartInstance->c2_R[c2_i7] = (*chartInstance->c2_H)[c2_i7];
  }

  c2_b_x = chartInstance->c2_R[0];
  c2_c_x = c2_b_x;
  c2_b = muDoubleScalarIsNaN(c2_c_x);
  c2_p = !c2_b;
  if (c2_p) {
    c2_idx = 1;
  } else {
    c2_idx = 0;
    c2_k = 2;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_k < 287821)) {
      c2_d_x = chartInstance->c2_R[c2_k - 1];
      c2_e_x = c2_d_x;
      c2_b_b = muDoubleScalarIsNaN(c2_e_x);
      c2_b_p = !c2_b_b;
      if (c2_b_p) {
        c2_idx = c2_k;
        c2_exitg1 = true;
      } else {
        c2_k++;
      }
    }
  }

  if (c2_idx == 0) {
    c2_inputMin = chartInstance->c2_R[0];
  } else {
    c2_first = c2_idx - 1;
    c2_ex = chartInstance->c2_R[c2_first];
    c2_i8 = c2_first;
    for (c2_b_k = c2_i8 + 2; c2_b_k < 287821; c2_b_k++) {
      if (c2_ex > chartInstance->c2_R[c2_b_k - 1]) {
        c2_ex = chartInstance->c2_R[c2_b_k - 1];
      }
    }

    c2_inputMin = c2_ex;
  }

  for (c2_i9 = 0; c2_i9 < 287820; c2_i9++) {
    chartInstance->c2_R[c2_i9] = (*chartInstance->c2_H)[c2_i9];
  }

  c2_f_x = chartInstance->c2_R[0];
  c2_g_x = c2_f_x;
  c2_c_b = muDoubleScalarIsNaN(c2_g_x);
  c2_c_p = !c2_c_b;
  if (c2_c_p) {
    c2_b_idx = 1;
  } else {
    c2_b_idx = 0;
    c2_c_k = 2;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_c_k < 287821)) {
      c2_h_x = chartInstance->c2_R[c2_c_k - 1];
      c2_i_x = c2_h_x;
      c2_d_b = muDoubleScalarIsNaN(c2_i_x);
      c2_d_p = !c2_d_b;
      if (c2_d_p) {
        c2_b_idx = c2_c_k;
        c2_exitg1 = true;
      } else {
        c2_c_k++;
      }
    }
  }

  if (c2_b_idx == 0) {
    c2_inputMax = chartInstance->c2_R[0];
  } else {
    c2_b_first = c2_b_idx - 1;
    c2_b_ex = chartInstance->c2_R[c2_b_first];
    c2_i10 = c2_b_first;
    for (c2_d_k = c2_i10 + 2; c2_d_k < 287821; c2_d_k++) {
      if (c2_b_ex < chartInstance->c2_R[c2_d_k - 1]) {
        c2_b_ex = chartInstance->c2_R[c2_d_k - 1];
      }
    }

    c2_inputMax = c2_b_ex;
  }

  for (c2_i11 = 0; c2_i11 < 287820; c2_i11++) {
    chartInstance->c2_R[c2_i11] = (*chartInstance->c2_H)[c2_i11];
  }

  c2_b_rescaleKernel(chartInstance, chartInstance->c2_R, c2_inputMin,
                     c2_inputMax);
  c2_b_st.site = &c2_t_emlrtRSI;
  c2_imadjust(chartInstance, &c2_b_st, chartInstance->c2_R, chartInstance->c2_u);
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", chartInstance->c2_u, 0, 0U, 1U, 0U, 2,
    1599, 180), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create_class_instance("coder.internal.string"),
                false);
  for (c2_i12 = 0; c2_i12 < 5; c2_i12++) {
    c2_b_u[c2_i12] = c2_obj.Value[c2_i12];
  }

  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_u, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  c2_propValues[0] = c2_c_y;
  sf_mex_set_all_properties(&c2_b_y, 0, 1, &c2_propNames[0], &c2_propClasses[0],
    &c2_propValues[0]);
  sf_mex_assign(&c2_b_y, sf_mex_convert_to_redirect_source(c2_b_y, 0,
    "coder.internal.string"), false);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", *chartInstance->c2_T, 0, 0U, 1U, 0U,
    2, 1, 180), false);
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create_class_instance("coder.internal.string"),
                false);
  for (c2_i13 = 0; c2_i13 < 5; c2_i13++) {
    c2_b_u[c2_i13] = c2_b_obj.Value[c2_i13];
  }

  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_u, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  c2_b_propValues[0] = c2_f_y;
  sf_mex_set_all_properties(&c2_e_y, 0, 1, &c2_b_propNames[0],
    &c2_b_propClasses[0], &c2_b_propValues[0]);
  sf_mex_assign(&c2_e_y, sf_mex_convert_to_redirect_source(c2_e_y, 0,
    "coder.internal.string"), false);
  c2_g_y = NULL;
  sf_mex_assign(&c2_g_y, sf_mex_create("y", *chartInstance->c2_b_R, 0, 0U, 1U,
    0U, 2, 1, 1599), false);
  c2_h_y = NULL;
  sf_mex_assign(&c2_h_y, sf_mex_create_class_instance("coder.internal.string"),
                false);
  for (c2_i14 = 0; c2_i14 < 20; c2_i14++) {
    c2_c_u[c2_i14] = c2_c_obj.Value[c2_i14];
  }

  c2_i_y = NULL;
  sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_c_u, 10, 0U, 1U, 0U, 2, 1, 20),
                false);
  c2_c_propValues[0] = c2_i_y;
  sf_mex_set_all_properties(&c2_h_y, 0, 1, &c2_c_propNames[0],
    &c2_c_propClasses[0], &c2_c_propValues[0]);
  sf_mex_assign(&c2_h_y, sf_mex_convert_to_redirect_source(c2_h_y, 0,
    "coder.internal.string"), false);
  c2_j_y = NULL;
  sf_mex_assign(&c2_j_y, sf_mex_create_class_instance("coder.internal.string"),
                false);
  for (c2_i15 = 0; c2_i15 < 3; c2_i15++) {
    c2_d_u[c2_i15] = c2_d_obj.Value[c2_i15];
  }

  c2_k_y = NULL;
  sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_d_u, 10, 0U, 1U, 0U, 2, 1, 3),
                false);
  c2_d_propValues[0] = c2_k_y;
  sf_mex_set_all_properties(&c2_j_y, 0, 1, &c2_d_propNames[0],
    &c2_d_propClasses[0], &c2_d_propValues[0]);
  sf_mex_assign(&c2_j_y, sf_mex_convert_to_redirect_source(c2_j_y, 0,
    "coder.internal.string"), false);
  c2_b_st.site = &c2_t_emlrtRSI;
  c2_imshow(chartInstance, &c2_b_st, c2_y, c2_b_y, c2_d_y, c2_e_y, c2_g_y,
            c2_h_y, c2_j_y);
  for (c2_i16 = 0; c2_i16 < 15; c2_i16++) {
    c2_e_obj.Value[c2_i16] = c2_cv4[c2_i16];
  }

  c2_l_y = NULL;
  sf_mex_assign(&c2_l_y, sf_mex_create_class_instance("coder.internal.string"),
                false);
  for (c2_i17 = 0; c2_i17 < 15; c2_i17++) {
    c2_e_u[c2_i17] = c2_e_obj.Value[c2_i17];
  }

  c2_m_y = NULL;
  sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_e_u, 10, 0U, 1U, 0U, 2, 1, 15),
                false);
  c2_e_propValues[0] = c2_m_y;
  sf_mex_set_all_properties(&c2_l_y, 0, 1, &c2_e_propNames[0],
    &c2_e_propClasses[0], &c2_e_propValues[0]);
  sf_mex_assign(&c2_l_y, sf_mex_convert_to_redirect_source(c2_l_y, 0,
    "coder.internal.string"), false);
  c2_b_st.site = &c2_u_emlrtRSI;
  c2_title(chartInstance, &c2_b_st, c2_l_y);
  for (c2_i18 = 0; c2_i18 < 6; c2_i18++) {
    c2_f_obj.Value[c2_i18] = c2_cv5[c2_i18];
  }

  c2_n_y = NULL;
  sf_mex_assign(&c2_n_y, sf_mex_create_class_instance("coder.internal.string"),
                false);
  for (c2_i19 = 0; c2_i19 < 6; c2_i19++) {
    c2_f_u[c2_i19] = c2_f_obj.Value[c2_i19];
  }

  c2_o_y = NULL;
  sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_f_u, 10, 0U, 1U, 0U, 2, 1, 6),
                false);
  c2_f_propValues[0] = c2_o_y;
  sf_mex_set_all_properties(&c2_n_y, 0, 1, &c2_f_propNames[0],
    &c2_f_propClasses[0], &c2_f_propValues[0]);
  sf_mex_assign(&c2_n_y, sf_mex_convert_to_redirect_source(c2_n_y, 0,
    "coder.internal.string"), false);
  c2_b_st.site = &c2_v_emlrtRSI;
  c2_xlabel(chartInstance, &c2_b_st, c2_n_y);
  for (c2_i20 = 0; c2_i20 < 4; c2_i20++) {
    c2_g_obj.Value[c2_i20] = c2_cv6[c2_i20];
  }

  c2_p_y = NULL;
  sf_mex_assign(&c2_p_y, sf_mex_create_class_instance("coder.internal.string"),
                false);
  for (c2_i21 = 0; c2_i21 < 4; c2_i21++) {
    c2_g_u[c2_i21] = c2_g_obj.Value[c2_i21];
  }

  c2_q_y = NULL;
  sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_g_u, 10, 0U, 1U, 0U, 2, 1, 4),
                false);
  c2_g_propValues[0] = c2_q_y;
  sf_mex_set_all_properties(&c2_p_y, 0, 1, &c2_g_propNames[0],
    &c2_g_propClasses[0], &c2_g_propValues[0]);
  sf_mex_assign(&c2_p_y, sf_mex_convert_to_redirect_source(c2_p_y, 0,
    "coder.internal.string"), false);
  c2_b_st.site = &c2_w_emlrtRSI;
  c2_ylabel(chartInstance, &c2_b_st, c2_p_y);
  for (c2_i22 = 0; c2_i22 < 2; c2_i22++) {
    c2_h_u[c2_i22] = 1.0 + 179.0 * (real_T)c2_i22;
  }

  c2_r_y = NULL;
  sf_mex_assign(&c2_r_y, sf_mex_create("y", c2_h_u, 0, 0U, 1U, 0U, 2, 1, 2),
                false);
  sf_mex_call(&c2_st, NULL, "disp", 0U, 1U, 14, c2_r_y);
  for (c2_i23 = 0; c2_i23 < 2; c2_i23++) {
    c2_h_u[c2_i23] = 1.0 + 1598.0 * (real_T)c2_i23;
  }

  c2_s_y = NULL;
  sf_mex_assign(&c2_s_y, sf_mex_create("y", c2_h_u, 0, 0U, 1U, 0U, 2, 1, 2),
                false);
  sf_mex_call(&c2_st, NULL, "disp", 0U, 1U, 14, c2_s_y);
  c2_t_y = NULL;
  sf_mex_assign(&c2_t_y, sf_mex_create("y", c2_cv7, 10, 0U, 1U, 0U, 2, 1, 2),
                false);
  c2_b_st.site = &c2_x_emlrtRSI;
  c2_axis(chartInstance, &c2_b_st, c2_t_y);
  c2_u_y = NULL;
  sf_mex_assign(&c2_u_y, sf_mex_create("y", c2_cv8, 10, 0U, 1U, 0U, 2, 1, 6),
                false);
  c2_b_st.site = &c2_y_emlrtRSI;
  c2_b_axis(chartInstance, &c2_b_st, c2_u_y);
  c2_b_st.site = &c2_ab_emlrtRSI;
  c2_colormap(chartInstance, &c2_b_st, c2_hot(chartInstance, &c2_b_st));
  c2_do_animation_call_c2_ex_blkHoughTransform(chartInstance);
}

static void ext_mode_exec_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_update_jit_animation_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_st = NULL;
  const mxArray *c2_y = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(1, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_ex_blkHoughTransform, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_b_u;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_b_u = sf_mex_dup(c2_st);
  chartInstance->c2_is_active_c2_ex_blkHoughTransform = c2_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_b_u, 0)),
     "is_active_c2_ex_blkHoughTransform");
  sf_mex_destroy(&c2_b_u);
  sf_mex_destroy(&c2_st);
}

static void initSimStructsc2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc2_ex_blkHoughTransform
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_rescaleKernel(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, real_T c2_A[287820], real_T c2_inputMin, real_T c2_inputMax,
  real_T c2_b_A[287820])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 287820; c2_i++) {
    c2_b_A[c2_i] = c2_A[c2_i];
  }

  c2_b_rescaleKernel(chartInstance, c2_b_A, c2_inputMin, c2_inputMax);
}

static real_T c2_pow2(SFc2_ex_blkHoughTransformInstanceStruct *chartInstance,
                      real_T c2_a)
{
  real_T c2_b;
  real_T c2_b_a;
  real_T c2_b_b;
  real_T c2_b_x;
  real_T c2_c_b;
  real_T c2_d_b;
  (void)chartInstance;
  c2_b_x = c2_a;
  c2_b_a = c2_b_x;
  c2_b = c2_b_a;
  c2_b_b = c2_b;
  c2_c_b = c2_b_b;
  c2_d_b = c2_c_b;
  return muDoubleScalarPower(2.0, c2_d_b);
}

static void c2_imadjust(SFc2_ex_blkHoughTransformInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_varargin_1[287820], real_T c2_out[287820])
{
  static char_T c2_cv1[40] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm', 'a',
    'd', 'j', 'u', 's', 't', ':', 'l', 'o', 'w', 'M', 'u', 's', 't', 'B', 'e',
    'S', 'm', 'a', 'l', 'l', 'e', 'r', 'T', 'h', 'a', 'n', 'H', 'i', 'g', 'h' };

  static char_T c2_cv2[39] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm', 'a',
    'd', 'j', 'u', 's', 't', ':', 'p', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r',
    's', 'A', 'r', 'e', 'O', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g', 'e' };

  static char_T c2_b_cv[3] = { 'o', 'f', 'f' };

  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_s = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_lowhigh_in[2];
  real_T c2_a;
  real_T c2_b_a;
  real_T c2_b_b;
  real_T c2_b_fullRange;
  real_T c2_b_hIn;
  real_T c2_b_i;
  real_T c2_b_lIn;
  real_T c2_b_minval;
  real_T c2_b_varargin_1;
  real_T c2_b_varargin_2;
  real_T c2_c;
  real_T c2_c_a;
  real_T c2_c_b;
  real_T c2_c_minval;
  real_T c2_c_varargin_1;
  real_T c2_d_a;
  real_T c2_d_varargin_1;
  real_T c2_d_x;
  real_T c2_e_a;
  real_T c2_e_varargin_1;
  real_T c2_e_x;
  real_T c2_f_a;
  real_T c2_f_x;
  real_T c2_fullRange;
  real_T c2_g_a;
  real_T c2_g_x;
  real_T c2_hIn;
  real_T c2_h_x;
  real_T c2_h_y;
  real_T c2_highIn;
  real_T c2_i_x;
  real_T c2_i_y;
  real_T c2_j_x;
  real_T c2_j_y;
  real_T c2_k_x;
  real_T c2_k_y;
  real_T c2_lIn;
  real_T c2_l_x;
  real_T c2_l_y;
  real_T c2_lowIn;
  real_T c2_m_x;
  real_T c2_m_y;
  real_T c2_maxval;
  real_T c2_minval;
  real_T c2_n_x;
  real_T c2_n_y;
  real_T c2_o_x;
  real_T c2_o_y;
  real_T c2_p_x;
  real_T c2_p_y;
  real_T c2_q_x;
  real_T c2_q_y;
  real_T c2_r_x;
  real_T c2_s_x;
  real_T c2_t_x;
  real_T c2_u_x;
  real_T c2_v_x;
  real_T c2_varargin_2;
  real_T c2_w_x;
  int32_T c2_i;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b_isInvalid;
  boolean_T c2_b_x;
  boolean_T c2_c_isInvalid;
  boolean_T c2_c_x;
  boolean_T c2_c_y;
  boolean_T c2_d_isInvalid;
  boolean_T c2_isInvalid;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 3),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 27),
                false);
  c2_st.site = &c2_j_emlrtRSI;
  sf_mex_assign(&c2_s, c2_b_warning(chartInstance, &c2_st, c2_y, c2_b_y), false);
  c2_st.site = &c2_h_emlrtRSI;
  c2_stretchlim(chartInstance, &c2_st, c2_varargin_1, c2_lowhigh_in);
  c2_st.site = &c2_k_emlrtRSI;
  c2_c_warning(chartInstance, &c2_st, sf_mex_dup(c2_s));
  c2_lowIn = c2_lowhigh_in[0];
  c2_highIn = c2_lowhigh_in[1];
  c2_b_x = (c2_lowIn >= c2_highIn);
  c2_c_x = c2_b_x;
  if (!c2_c_x) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  c2_c_y = !c2_b;
  if (c2_c_y) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    sf_mex_call(c2_sp, &c2_d_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_e_y)));
  }

  c2_fullRange = c2_lowIn;
  c2_b_varargin_1 = c2_fullRange;
  c2_d_x = c2_b_varargin_1;
  c2_e_x = c2_d_x;
  c2_f_x = c2_e_x;
  c2_g_x = c2_f_x;
  c2_h_x = c2_g_x;
  c2_minval = c2_h_x;
  if (c2_minval < 0.0) {
    c2_isInvalid = true;
  } else {
    c2_isInvalid = false;
  }

  c2_b_isInvalid = c2_isInvalid;
  if (c2_b_isInvalid) {
    c2_b1 = true;
  } else {
    c2_b_fullRange = c2_highIn;
    c2_c_varargin_1 = c2_b_fullRange;
    c2_i_x = c2_c_varargin_1;
    c2_j_x = c2_i_x;
    c2_k_x = c2_j_x;
    c2_l_x = c2_k_x;
    c2_m_x = c2_l_x;
    c2_b_minval = c2_m_x;
    if (c2_b_minval < 0.0) {
      c2_c_isInvalid = true;
    } else {
      c2_c_isInvalid = false;
    }

    c2_d_isInvalid = c2_c_isInvalid;
    if (c2_d_isInvalid) {
      c2_b1 = true;
    } else {
      c2_b1 = false;
    }
  }

  if (c2_b1) {
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(c2_sp, &c2_c_emlrtMCI, "error", 0U, 2U, 14, c2_f_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_g_y)));
  }

  c2_st.site = &c2_i_emlrtRSI;
  c2_lIn = c2_lowIn;
  c2_hIn = c2_highIn;
  c2_b_lIn = c2_lIn;
  c2_b_hIn = c2_hIn;
  for (c2_i = 0; c2_i < 287820; c2_i++) {
    c2_b_i = (real_T)c2_i + 1.0;
    c2_d_varargin_1 = c2_b_hIn;
    c2_varargin_2 = c2_varargin_1[(int32_T)c2_b_i - 1];
    c2_n_x = c2_d_varargin_1;
    c2_h_y = c2_varargin_2;
    c2_o_x = c2_n_x;
    c2_i_y = c2_h_y;
    c2_p_x = c2_o_x;
    c2_j_y = c2_i_y;
    c2_a = c2_p_x;
    c2_b_b = c2_j_y;
    c2_q_x = c2_a;
    c2_k_y = c2_b_b;
    c2_r_x = c2_q_x;
    c2_l_y = c2_k_y;
    c2_c_minval = muDoubleScalarMin(c2_r_x, c2_l_y);
    c2_e_varargin_1 = c2_b_lIn;
    c2_b_varargin_2 = c2_c_minval;
    c2_s_x = c2_e_varargin_1;
    c2_m_y = c2_b_varargin_2;
    c2_t_x = c2_s_x;
    c2_n_y = c2_m_y;
    c2_u_x = c2_t_x;
    c2_o_y = c2_n_y;
    c2_b_a = c2_u_x;
    c2_c_b = c2_o_y;
    c2_v_x = c2_b_a;
    c2_p_y = c2_c_b;
    c2_w_x = c2_v_x;
    c2_q_y = c2_p_y;
    c2_maxval = muDoubleScalarMax(c2_w_x, c2_q_y);
    c2_c_a = (c2_maxval - c2_b_lIn) / (c2_b_hIn - c2_b_lIn);
    c2_d_a = c2_c_a;
    c2_e_a = c2_d_a;
    c2_f_a = c2_e_a;
    c2_g_a = c2_f_a;
    c2_c = c2_g_a;
    c2_out[(int32_T)c2_b_i - 1] = c2_c;
  }

  sf_mex_destroy(&c2_s);
}

static void c2_stretchlim(SFc2_ex_blkHoughTransformInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_varargin_1[287820], real_T c2_lowhigh[2])
{
  emlrtStack c2_st;
  real_T c2_b_idx;
  real_T c2_ihigh;
  real_T c2_ilow;
  real_T c2_s;
  real_T c2_y;
  int32_T c2_b_k;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_ib;
  int32_T c2_idx;
  int32_T c2_k;
  boolean_T c2_findHighFlag;
  boolean_T c2_findLowFlag;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_l_emlrtRSI;
  c2_imhist(chartInstance, &c2_st, c2_varargin_1, chartInstance->c2_N);
  for (c2_i = 0; c2_i < 65536; c2_i++) {
    chartInstance->c2_cdf[c2_i] = chartInstance->c2_N[c2_i];
  }

  for (c2_k = 0; c2_k < 65535; c2_k++) {
    c2_b_k = c2_k;
    chartInstance->c2_cdf[c2_b_k + 1] += chartInstance->c2_cdf[c2_b_k];
  }

  c2_s = c2_sumColumnB4(chartInstance, chartInstance->c2_N, 1);
  for (c2_ib = 0; c2_ib < 15; c2_ib++) {
    c2_s += c2_sumColumnB4(chartInstance, chartInstance->c2_N, 1 + ((c2_ib + 1) <<
      12));
  }

  c2_y = c2_s;
  for (c2_i1 = 0; c2_i1 < 65536; c2_i1++) {
    chartInstance->c2_cdf[c2_i1] /= c2_y;
  }

  c2_findLowFlag = true;
  c2_findHighFlag = true;
  c2_ilow = 0.0;
  c2_ihigh = 0.0;
  for (c2_idx = 0; c2_idx < 65536; c2_idx++) {
    c2_b_idx = (real_T)c2_idx + 1.0;
    if (c2_findLowFlag && (chartInstance->c2_cdf[(int32_T)c2_b_idx - 1] > 0.01))
    {
      c2_ilow = c2_b_idx;
      c2_findLowFlag = false;
    }

    if (c2_findHighFlag && (chartInstance->c2_cdf[(int32_T)c2_b_idx - 1] >= 0.99))
    {
      c2_ihigh = c2_b_idx;
      c2_findHighFlag = false;
    }
  }

  if (c2_ilow == c2_ihigh) {
    for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
      c2_lowhigh[c2_i2] = 1.0 + 65535.0 * (real_T)c2_i2;
    }
  } else {
    c2_lowhigh[0] = c2_ilow;
    c2_lowhigh[1] = c2_ihigh;
  }

  for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
    c2_lowhigh[c2_i3] = (c2_lowhigh[c2_i3] - 1.0) / 65535.0;
  }
}

static void c2_imhist(SFc2_ex_blkHoughTransformInstanceStruct *chartInstance,
                      const emlrtStack *c2_sp, real_T c2_varargin_1[287820],
                      real_T c2_yout[65536])
{
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  real_T c2_a;
  real_T c2_b_a;
  real_T c2_b_x;
  real_T c2_c_i;
  real_T c2_c_x;
  real_T c2_idx;
  real_T c2_out;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_c;
  int32_T c2_i;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_nanFlag;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_st.site = &c2_m_emlrtRSI;
  c2_b_st.site = &c2_n_emlrtRSI;
  c2_out = 1.0;
  getnumcores(&c2_out);
  for (c2_i = 0; c2_i < 65536; c2_i++) {
    c2_yout[c2_i] = 0.0;
  }

  c2_nanFlag = false;
  for (c2_b_i = 0; c2_b_i < 287820; c2_b_i++) {
    c2_c_i = (real_T)c2_b_i + 1.0;
    c2_b_x = c2_varargin_1[(int32_T)c2_c_i - 1];
    c2_b = muDoubleScalarIsNaN(c2_b_x);
    if (c2_b) {
      c2_nanFlag = true;
      c2_idx = 0.0;
    } else {
      c2_idx = c2_varargin_1[(int32_T)c2_c_i - 1] * 65535.0 + 0.5;
    }

    if (c2_idx < 0.0) {
      c2_yout[0]++;
    } else if (c2_idx > 65535.0) {
      c2_yout[65535]++;
    } else {
      c2_c_x = c2_varargin_1[(int32_T)c2_c_i - 1];
      c2_b_b = muDoubleScalarIsInf(c2_c_x);
      if (c2_b_b) {
        c2_yout[65535]++;
      } else {
        c2_a = c2_idx;
        c2_c = (int32_T)c2_a;
        c2_b_a = c2_idx;
        c2_b_c = (int32_T)c2_b_a;
        c2_yout[c2_c] = c2_yout[c2_b_c] + 1.0;
      }
    }
  }

  if (c2_nanFlag) {
    c2_b_st.site = &c2_o_emlrtRSI;
    c2_warning(chartInstance, &c2_b_st);
  }
}

static void c2_warning(SFc2_ex_blkHoughTransformInstanceStruct *chartInstance,
  const emlrtStack *c2_sp)
{
  static char_T c2_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c2_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_y = NULL;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 27),
                false);
  c2_st.site = &c2_p_emlrtRSI;
  c2_b_feval(chartInstance, &c2_st, c2_y, c2_feval(chartInstance, &c2_st, c2_b_y,
              c2_c_y));
}

static real_T c2_sumColumnB4(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, real_T c2_b_x[65536], int32_T c2_vstart)
{
  real_T c2_psum1;
  real_T c2_psum2;
  real_T c2_psum3;
  real_T c2_psum4;
  int32_T c2_b_k;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_k;
  (void)chartInstance;
  c2_i2 = c2_vstart + 1023;
  c2_i3 = c2_vstart + 2047;
  c2_i4 = c2_vstart + 3071;
  c2_psum1 = c2_b_x[c2_vstart - 1];
  c2_psum2 = c2_b_x[c2_i2];
  c2_psum3 = c2_b_x[c2_i3];
  c2_psum4 = c2_b_x[c2_i4];
  for (c2_k = 0; c2_k < 1023; c2_k++) {
    c2_b_k = c2_k + 1;
    c2_psum1 += c2_b_x[(c2_vstart + c2_b_k) - 1];
    c2_psum2 += c2_b_x[c2_i2 + c2_b_k];
    c2_psum3 += c2_b_x[c2_i3 + c2_b_k];
    c2_psum4 += c2_b_x[c2_i4 + c2_b_k];
  }

  return (c2_psum1 + c2_psum2) + (c2_psum3 + c2_psum4);
}

const mxArray *sf_c2_ex_blkHoughTransform_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static uint8_T c2_emlrt_marshallIn(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const mxArray *c2_nullptr, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nullptr), &c2_thisId);
  sf_mex_destroy(&c2_nullptr);
  return c2_y;
}

static uint8_T c2_b_emlrt_marshallIn(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_c_u;
  uint8_T c2_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_b_u), &c2_c_u, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_c_u;
  sf_mex_destroy(&c2_b_u);
  return c2_y;
}

static void c2_slStringInitializeDynamicBuffers
  (SFc2_ex_blkHoughTransformInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_chart_data_browse_helper(SFc2_ex_blkHoughTransformInstanceStruct *
  chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig)
{
  *c2_mxData = NULL;
  *c2_mxData = NULL;
  *c2_isValueTooBig = 0U;
  switch (c2_ssIdNumber) {
   case 4U:
    *c2_isValueTooBig = 1U;
    break;

   case 6U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_T, 0, 0U,
      1U, 0U, 2, 1, 180), false);
    break;

   case 7U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_b_R, 0,
      0U, 1U, 0U, 2, 1, 1599), false);
    break;
  }
}

static const mxArray *c2_b_warning(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0, const
  mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "warning", 1U, 2U, 14,
    sf_mex_dup(c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static const mxArray *c2_c_warning(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "warning", 0U, 1U, 14,
    sf_mex_dup(c2_input0)), false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_feval(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0, const
  mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static void c2_b_feval(SFc2_ex_blkHoughTransformInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  (void)chartInstance;
  sf_mex_call(c2_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c2_input0), 14,
              sf_mex_dup(c2_input1));
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
}

static const mxArray *c2_imshow(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0, const
  mxArray *c2_input1, const mxArray *c2_input2, const mxArray *c2_input3, const
  mxArray *c2_input4, const mxArray *c2_input5, const mxArray *c2_input6)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "imshow", 0U, 7U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1), 14, sf_mex_dup(c2_input2), 14,
    sf_mex_dup(c2_input3), 14, sf_mex_dup(c2_input4), 14, sf_mex_dup(c2_input5),
    14, sf_mex_dup(c2_input6)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  sf_mex_destroy(&c2_input2);
  sf_mex_destroy(&c2_input3);
  sf_mex_destroy(&c2_input4);
  sf_mex_destroy(&c2_input5);
  sf_mex_destroy(&c2_input6);
  return c2_m;
}

static const mxArray *c2_title(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "title", 0U, 1U, 14, sf_mex_dup
    (c2_input0)), false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_xlabel(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "xlabel", 0U, 1U, 14, sf_mex_dup
    (c2_input0)), false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_ylabel(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "ylabel", 0U, 1U, 14, sf_mex_dup
    (c2_input0)), false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_axis(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "axis", 0U, 1U, 14, sf_mex_dup
    (c2_input0)), false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_b_axis(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "axis", 0U, 1U, 14, sf_mex_dup
    (c2_input0)), false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_hot(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "hot", 1U, 0U), false);
  return c2_m;
}

static const mxArray *c2_colormap(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, const mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "colormap", 0U, 1U, 14,
    sf_mex_dup(c2_input0)), false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static void c2_b_rescaleKernel(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance, real_T c2_A[287820], real_T c2_inputMin, real_T c2_inputMax)
{
  real_T c2_a;
  real_T c2_ab_x;
  real_T c2_b;
  real_T c2_b_a;
  real_T c2_b_b;
  real_T c2_b_e;
  real_T c2_b_varargin_1;
  real_T c2_b_varargin_2;
  real_T c2_b_x;
  real_T c2_b_y;
  real_T c2_c1;
  real_T c2_c2;
  real_T c2_c_a;
  real_T c2_c_b;
  real_T c2_c_varargin_2;
  real_T c2_c_x;
  real_T c2_c_y;
  real_T c2_d;
  real_T c2_d_x;
  real_T c2_d_y;
  real_T c2_e;
  real_T c2_e1;
  real_T c2_e_x;
  real_T c2_e_y;
  real_T c2_f_x;
  real_T c2_f_y;
  real_T c2_g_x;
  real_T c2_g_y;
  real_T c2_h_x;
  real_T c2_h_y;
  real_T c2_iMax;
  real_T c2_iMin;
  real_T c2_i_x;
  real_T c2_i_y;
  real_T c2_j_x;
  real_T c2_j_y;
  real_T c2_k_x;
  real_T c2_k_y;
  real_T c2_l_x;
  real_T c2_l_y;
  real_T c2_m_x;
  real_T c2_m_y;
  real_T c2_maxval;
  real_T c2_minval;
  real_T c2_n_x;
  real_T c2_n_y;
  real_T c2_o_x;
  real_T c2_o_y;
  real_T c2_p_x;
  real_T c2_p_y;
  real_T c2_q_x;
  real_T c2_r1;
  real_T c2_r3;
  real_T c2_r_x;
  real_T c2_s;
  real_T c2_s_x;
  real_T c2_sigma;
  real_T c2_t;
  real_T c2_t_x;
  real_T c2_u_x;
  real_T c2_v_x;
  real_T c2_varargin_1;
  real_T c2_varargin_2;
  real_T c2_w_x;
  real_T c2_x_x;
  real_T c2_y;
  real_T c2_y_x;
  real_T c2_z;
  int32_T c2_b_end;
  int32_T c2_b_i;
  int32_T c2_c_end;
  int32_T c2_c_i;
  int32_T c2_d_i;
  int32_T c2_eint;
  int32_T c2_end;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  boolean_T c2_b1;
  boolean_T c2_d_b;
  boolean_T c2_e_b;
  boolean_T c2_f_b;
  boolean_T c2_g_b;
  c2_varargin_2 = c2_inputMax;
  c2_y = c2_varargin_2;
  c2_b_y = c2_y;
  c2_c_y = c2_b_y;
  c2_b = c2_c_y;
  c2_d_y = c2_b;
  c2_e_y = c2_d_y;
  c2_minval = muDoubleScalarMin(0.0, c2_e_y);
  c2_varargin_1 = c2_minval;
  c2_b_varargin_2 = c2_inputMin;
  c2_b_x = c2_varargin_1;
  c2_f_y = c2_b_varargin_2;
  c2_c_x = c2_b_x;
  c2_g_y = c2_f_y;
  c2_d_x = c2_c_x;
  c2_h_y = c2_g_y;
  c2_a = c2_d_x;
  c2_b_b = c2_h_y;
  c2_e_x = c2_a;
  c2_i_y = c2_b_b;
  c2_f_x = c2_e_x;
  c2_j_y = c2_i_y;
  c2_sigma = muDoubleScalarMax(c2_f_x, c2_j_y);
  for (c2_i = 0; c2_i < 287820; c2_i++) {
    c2_A[c2_i] -= c2_sigma;
  }

  c2_iMin = c2_inputMin - c2_sigma;
  c2_iMax = c2_inputMax - c2_sigma;
  c2_g_x = c2_iMax;
  c2_h_x = c2_g_x;
  c2_i_x = c2_h_x;
  c2_b_varargin_1 = muDoubleScalarAbs(c2_i_x);
  c2_j_x = c2_iMin;
  c2_k_x = c2_j_x;
  c2_l_x = c2_k_x;
  c2_c_varargin_2 = muDoubleScalarAbs(c2_l_x);
  c2_m_x = c2_b_varargin_1;
  c2_k_y = c2_c_varargin_2;
  c2_n_x = c2_m_x;
  c2_l_y = c2_k_y;
  c2_o_x = c2_n_x;
  c2_m_y = c2_l_y;
  c2_b_a = c2_o_x;
  c2_c_b = c2_m_y;
  c2_p_x = c2_b_a;
  c2_n_y = c2_c_b;
  c2_q_x = c2_p_x;
  c2_o_y = c2_n_y;
  c2_maxval = muDoubleScalarMax(c2_q_x, c2_o_y);
  c2_r_x = c2_maxval;
  c2_s_x = c2_r_x;
  c2_t_x = c2_s_x;
  c2_u_x = c2_t_x;
  c2_v_x = c2_u_x;
  c2_w_x = c2_v_x;
  c2_d_b = muDoubleScalarIsInf(c2_w_x);
  c2_e_b = !c2_d_b;
  c2_x_x = c2_v_x;
  c2_f_b = muDoubleScalarIsNaN(c2_x_x);
  c2_b1 = !c2_f_b;
  c2_g_b = (c2_e_b && c2_b1);
  if (c2_g_b) {
    frexp(c2_u_x, &c2_eint);
    c2_e = (real_T)c2_eint;
  } else {
    c2_e = 0.0;
  }

  c2_d = c2_e;
  c2_b_e = c2_d;
  c2_e1 = c2_b_e;
  c2_r1 = c2_pow2(chartInstance, c2_e1 - 1.0);
  c2_y_x = (c2_e1 + 1.0) / 2.0;
  c2_ab_x = c2_y_x;
  c2_p_y = c2_ab_x;
  c2_p_y = trunc(c2_p_y);
  c2_r3 = c2_pow2(chartInstance, c2_p_y - 1.0);
  if (c2_iMin == c2_iMax) {
    for (c2_i1 = 0; c2_i1 < 287820; c2_i1++) {
      chartInstance->c2_x[c2_i1] = c2_A[c2_i1];
    }

    c2_end = 287820;
    for (c2_b_i = 0; c2_b_i < c2_end; c2_b_i++) {
      if (!muDoubleScalarIsNaN(chartInstance->c2_x[c2_b_i])) {
        c2_A[c2_b_i] = 0.0;
      }
    }
  } else {
    c2_c1 = c2_iMax / c2_r1;
    c2_c2 = c2_iMin / c2_r1;
    c2_z = (c2_c1 * 0.0 - c2_c2 * (1.0 / c2_r3)) / (c2_c1 - c2_c2);
    c2_c2 = c2_iMax / c2_r3 - c2_iMin / c2_r3;
    c2_s = 1.0 / c2_c2 / c2_r3;
    c2_t = c2_r3 * c2_z;
    c2_c_a = c2_s;
    for (c2_i2 = 0; c2_i2 < 287820; c2_i2++) {
      c2_A[c2_i2] *= c2_c_a;
    }

    for (c2_i3 = 0; c2_i3 < 287820; c2_i3++) {
      c2_A[c2_i3] += c2_t;
    }

    c2_b_end = 287820;
    for (c2_c_i = 0; c2_c_i < c2_b_end; c2_c_i++) {
      if (c2_A[c2_c_i] < 0.0) {
        c2_A[c2_c_i] = 0.0;
      }
    }

    c2_c_end = 287820;
    for (c2_d_i = 0; c2_d_i < c2_c_end; c2_d_i++) {
      if (c2_A[c2_d_i] > 1.0) {
        c2_A[c2_d_i] = 1.0;
      }
    }
  }
}

static void init_dsm_address_info(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_ex_blkHoughTransformInstanceStruct
  *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_H = (real_T (*)[287820])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_T = (real_T (*)[180])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_b_R = (real_T (*)[1599])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_ex_blkHoughTransform_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(307174927U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2022547341U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3609110631U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2314163402U);
}

mxArray *sf_c2_ex_blkHoughTransform_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  return(mxcell3p);
}

mxArray *sf_c2_ex_blkHoughTransform_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("getnumcores");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_ex_blkHoughTransform_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_ex_blkHoughTransform(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiB2YGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYcABQfK9EP8F4GknwWLfkUk/QJQfmZxfGJySWZZanyyUXxqRXxSTr"
    "ZHfml6RkhRYl5xWn5RLpL5IAAAV34Y3g=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_ex_blkHoughTransform_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s8JH3KEBuFcU3WHMeHvjLJG";
}

static void sf_opaque_initialize_c2_ex_blkHoughTransform(void *chartInstanceVar)
{
  initialize_params_c2_ex_blkHoughTransform
    ((SFc2_ex_blkHoughTransformInstanceStruct*) chartInstanceVar);
  initialize_c2_ex_blkHoughTransform((SFc2_ex_blkHoughTransformInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c2_ex_blkHoughTransform(void *chartInstanceVar)
{
  enable_c2_ex_blkHoughTransform((SFc2_ex_blkHoughTransformInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c2_ex_blkHoughTransform(void *chartInstanceVar)
{
  disable_c2_ex_blkHoughTransform((SFc2_ex_blkHoughTransformInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c2_ex_blkHoughTransform(void *chartInstanceVar)
{
  sf_gateway_c2_ex_blkHoughTransform((SFc2_ex_blkHoughTransformInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_ex_blkHoughTransform(SimStruct*
  S)
{
  return get_sim_state_c2_ex_blkHoughTransform
    ((SFc2_ex_blkHoughTransformInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_ex_blkHoughTransform(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c2_ex_blkHoughTransform((SFc2_ex_blkHoughTransformInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c2_ex_blkHoughTransform(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_ex_blkHoughTransformInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_ex_blkHoughTransform_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_ex_blkHoughTransform
      ((SFc2_ex_blkHoughTransformInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_ex_blkHoughTransform(void *chartInstanceVar)
{
  mdl_start_c2_ex_blkHoughTransform((SFc2_ex_blkHoughTransformInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc2_ex_blkHoughTransformInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c2_ex_blkHoughTransform(void
  *chartInstanceVar)
{
  mdl_terminate_c2_ex_blkHoughTransform((SFc2_ex_blkHoughTransformInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_ex_blkHoughTransform(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_ex_blkHoughTransform
      ((SFc2_ex_blkHoughTransformInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc2_ex_blkHoughTransform
      ((SFc2_ex_blkHoughTransformInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_ex_blkHoughTransform_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrdWMtu20YUpRzXaII0zS6bAk123RSI7RbIoihs6xEptWqjkpOiQOGOhpfkVMMZZh565AP6Of2",
    "D7LPLqkC/ouimQJe9Q1GKKikSRy7QOARoekieOXPP3BcVVFrtAI87eI7uBcEeXj/EcyeYHB8U48",
    "rcObm/G3xVjF/dCgIqQ4hBdGwUsVHgdwibnhNFUh34H4Kk8B1oya1hUrREJMtjmYhAgaA4QSaV8",
    "eLVLLWciX7DCuqY9bOE0aSTSMvDE5yQhGeCj9/Gm1lzjow1poCaBkBoEiVtnDQ4ideroMywmgDt",
    "a5t6a6XBdGzmTNVtyw3LONRHQFtCG4Iq6A32dgwxUDUjP5GdvbozRcs044yI8lonRHcgQ+8wcJG",
    "F+PfMGlSvJC/y9ZggRipGeD3l1YSosthzjutso1tzb51NamrQs3HMROzUVTYFgfajn5TQKqrKAS",
    "gSw5nw46XOuvoo3+CZX5bEGpbCU6KOKfqBhtAvBtGBdYfg1kIXp/HCgiA9Di3dVWyAe+SbN1oul",
    "LbKGzadeJLeCpvz1ge4q3pL3gYVVcK59sN2ZXYKA+A5f40YsgV2wu8B1pqFXYne4SLXM/qtYM8t",
    "FNiqFCEr75WDBVReJL7FhF8CzlIXBhCizLOlzybaFEdWG5lWMfRrp6cl+ZaxLWFARYRC6XytCNO",
    "AC879ypM3ZNoFEqJRJZNbWXqGSQxuBQ10ZEVtKFUfNfYtDG+0cpHgh4YwhhoYyJNcHb37KeG25J",
    "pTjVnZuceFxizrx4tYFz9bgSmhCYSuBjIObcyzOEHZLdaufB6jtQNmxjXQVLGsbCRZTOhY/JxK3",
    "XEGF6Iv5FA0lEw7RRezxq8AMGsQJbCUnWApVeMGLr7cqhU87+bZ3bdhcDoTw0nP+cZjEFgNna2u",
    "ehOKUVUX2G7igq6C7bAX2I4IzbTBFnBcz2MgzPvgZvCmD95d0Qffm+uD7xZjenAJo8se7zddH9d",
    "VROhIqjSf7+HcfLdL9NXTfnwdLljCBTPc9PrZHL6ygjeYuy7y3dz59/s3Fvh28E6lUslxR3O4jx",
    "Z4dhdwe4Vmr78YHf/08W9/xX/8+Ov+y/1fNvFXlvgr+f8O92fF77vlTjH+ZNozzTL0YCmJbesP+",
    "tGT5uE39RPboBeHz5ptaA5+Pn3yeKKX53qn9++7Pg0DOM8HirbC4vvHjYmd9OVu/kdz693bMP/N",
    "OX9ChqOr4Sd6fb9BrwcLej3I+95L4rIbXL4tkpb9e1t/8cVdF773fZ3/pX1l8vCNLXHBNcFd1T7",
    "f+nLd33+4Jq8FC+/ffYftWJdHffqMd82u3wO/uvppMf569o1bTRgPV3TZxWNshKNVT98T//7bU7",
    "9p31N3+hU/LP5weCwIH2NbPflsKW6fK/eb1uyRAqJXf7v8H/Vkej3a0LfcXohvNx4yEcqh/nz/4",
    "MuDq9SnfwB79wkb",
    ""
  };

  static char newstr [1441] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_ex_blkHoughTransform(SimStruct *S)
{
  const char* newstr = sf_c2_ex_blkHoughTransform_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1098396879U));
  ssSetChecksum1(S,(4124381024U));
  ssSetChecksum2(S,(2925391463U));
  ssSetChecksum3(S,(2251406641U));
}

static void mdlRTW_c2_ex_blkHoughTransform(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_ex_blkHoughTransform(SimStruct *S)
{
  SFc2_ex_blkHoughTransformInstanceStruct *chartInstance;
  chartInstance = (SFc2_ex_blkHoughTransformInstanceStruct *)utMalloc(sizeof
    (SFc2_ex_blkHoughTransformInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_ex_blkHoughTransformInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_ex_blkHoughTransform;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_ex_blkHoughTransform;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c2_ex_blkHoughTransform;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c2_ex_blkHoughTransform;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_ex_blkHoughTransform;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c2_ex_blkHoughTransform;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c2_ex_blkHoughTransform;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_ex_blkHoughTransform;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_ex_blkHoughTransform;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_ex_blkHoughTransform;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_ex_blkHoughTransform;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_ex_blkHoughTransform;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_ex_blkHoughTransform(chartInstance);
}

void c2_ex_blkHoughTransform_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_ex_blkHoughTransform(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_ex_blkHoughTransform(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_ex_blkHoughTransform(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_ex_blkHoughTransform_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
