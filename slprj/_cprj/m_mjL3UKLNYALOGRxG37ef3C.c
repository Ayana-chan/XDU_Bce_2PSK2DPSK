/* Include files */

#include "modelInterface.h"
#include "m_mjL3UKLNYALOGRxG37ef3C.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 1,     /* lineNo */
  "AWGNChannel",                       /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannel.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 167, /* lineNo */
  "AWGNChannelBase",                   /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannelBase.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "Helper",                            /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\compiled\\+comm\\+internal\\Helper.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 14,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 25,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 27,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 35,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 172, /* lineNo */
  "AWGNChannelBase",                   /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannelBase.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 93,  /* lineNo */
  "validateattributes",                /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 197, /* lineNo */
  "AWGNChannelBase",                   /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannelBase.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 307, /* lineNo */
  "AWGNChannel",                       /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannel.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 314, /* lineNo */
  "AWGNChannel",                       /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannel.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 318, /* lineNo */
  "AWGNChannel",                       /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannel.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 113, /* lineNo */
  "rng",                               /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 116, /* lineNo */
  "rng",                               /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 118, /* lineNo */
  "rng",                               /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 120, /* lineNo */
  "rng",                               /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 273, /* lineNo */
  "rng",                               /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 275, /* lineNo */
  "rng",                               /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 277, /* lineNo */
  "rng",                               /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 278, /* lineNo */
  "rng",                               /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 45,  /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 69, /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 19, /* lineNo */
  "eml_rand_mcg16807_stateful",        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mcg16807_stateful.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 49, /* lineNo */
  "eml_rand_mcg16807",                 /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mcg16807.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 69, /* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 141,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 27, /* lineNo */
  "mt19937ar",                         /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mt19937ar.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 31, /* lineNo */
  "mt19937ar",                         /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mt19937ar.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 67, /* lineNo */
  "CoreRng",                           /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\CoreRng.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 239,/* lineNo */
  "AWGNChannelBase",                   /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannelBase.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 463,/* lineNo */
  "AWGNChannelBase",                   /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannelBase.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 37, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 43, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 52, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 60, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 350,/* lineNo */
  "AWGNChannel",                       /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannel.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 177,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 180,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 350,/* lineNo */
  "AWGNChannelBase",                   /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannelBase.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 313,/* lineNo */
  "AWGNChannelBase",                   /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannelBase.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 225,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 227,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 36, /* lineNo */
  "mt19937ar",                         /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mt19937ar.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 40, /* lineNo */
  "mt19937ar",                         /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mt19937ar.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 336,/* lineNo */
  "mt19937ar",                         /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mt19937ar.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 354,/* lineNo */
  "mt19937ar",                         /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mt19937ar.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 363,/* lineNo */
  "mt19937ar",                         /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mt19937ar.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 365,/* lineNo */
  "mt19937ar",                         /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mt19937ar.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 150,/* lineNo */
  "mt19937ar",                         /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mt19937ar.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 250,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 252,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 254,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 329,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 333,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 345,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 352,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 358,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 201,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 98, /* lineNo */
  "CoreRng",                           /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\CoreRng.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 377,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 381,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 401,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 419,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 423,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 439,/* lineNo */
  "RandStream",                        /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\RandStream.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 14,    /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatepositive",                  /* fName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "D:\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 122, /* lineNo */
  13,                                  /* colNo */
  "rng",                               /* fName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 244, /* lineNo */
  9,                                   /* colNo */
  "AWGNChannelBase",                   /* fName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannelBase.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 82,  /* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 291, /* lineNo */
  13,                                  /* colNo */
  "AWGNChannelBase",                   /* fName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannelBase.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 298, /* lineNo */
  13,                                  /* colNo */
  "AWGNChannelBase",                   /* fName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannelBase.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 157, /* lineNo */
  33,                                  /* colNo */
  "mt19937ar",                         /* fName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mt19937ar.m"/* pName */
};

static emlrtRSInfo tc_emlrtRSI = { 13, /* lineNo */
  "sqrt",                              /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 14, /* lineNo */
  "validatefinite",                    /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 14, /* lineNo */
  "validatenonnan",                    /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 14, /* lineNo */
  "validatepositive",                  /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 157,/* lineNo */
  "mt19937ar",                         /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mt19937ar.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 291,/* lineNo */
  "AWGNChannelBase",                   /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannelBase.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 298,/* lineNo */
  "AWGNChannelBase",                   /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannelBase.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 244,/* lineNo */
  "AWGNChannelBase",                   /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\comm\\comm\\+comm\\+internal\\AWGNChannelBase.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 122,/* lineNo */
  "rng",                               /* fcnName */
  "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_mjL3UKLNYALOGRxG37ef3C *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_mjL3UKLNYALOGRxG37ef3C *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance, const emlrtStack *sp, real_T b_EbNo, real_T b_SignalPower);
static void AWGNChannelBase_set_EbNo(const emlrtStack *sp,
  comm_internal_AWGNChannel *obj, real_T val);
static void AWGNChannelBase_set_SignalPower(const emlrtStack *sp,
  comm_internal_AWGNChannel *obj, real_T val);
static void SystemCore_setup(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance, const emlrtStack *sp, comm_internal_AWGNChannel *obj);
static real_T now(void);
static real_T b_mod(real_T x);
static void mt19937ar_reset(coder_internal_mt19937ar *obj, uint32_T varargin_1);
static real_T maximum(real_T x[4]);
static void AWGNChannelBase_getStandardDeviation(const emlrtStack *sp,
  comm_internal_AWGNChannel *obj);
static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  comm_internal_AWGNChannel *obj);
static void mw__internal__call__reset(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance, const emlrtStack *sp, real_T b_EbNo, real_T b_SignalPower);
static creal_T mw__internal__call__step(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance, const emlrtStack *sp, real_T b_EbNo, real_T b_SignalPower,
  creal_T b_u0);
static real_T mt19937ar_mtziggurat(const emlrtStack *sp,
  coder_internal_mt19937ar *obj);
static void mt19937ar_genrand_uint32_vector(coder_internal_mt19937ar *obj,
  uint32_T u[2]);
static real_T mt19937ar_genrandu(const emlrtStack *sp, coder_internal_mt19937ar *
  obj);
static boolean_T is_valid_state(uint32_T mt[625]);
static real_T RandStream_zigguratGenrandn(const emlrtStack *sp,
  coder_internal_RandStream *s);
static void RandStream_rand(const emlrtStack *sp, coder_internal_RandStream *s,
  real_T u[2]);
static real_T b_mt19937ar_genrandu(const emlrtStack *sp,
  coder_internal_mt19937ar *obj);
static real_T b_RandStream_rand(const emlrtStack *sp, coder_internal_RandStream *
  s);
static real_T RandStream_polarGenrandn(const emlrtStack *sp,
  coder_internal_RandStream *rs);
static real_T RandStream_inversionGenrandn(const emlrtStack *sp,
  coder_internal_RandStream *s);
static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static void init_simulink_io_address(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_mjL3UKLNYALOGRxG37ef3C *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T *b_EbNo;
  real_T *b_SignalPower;
  init_simulink_io_address(moduleInstance);
  b_SignalPower = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  b_EbNo = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetSimStateCompliance(moduleInstance->S, 4);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st, *b_EbNo, *b_SignalPower);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T *b_EbNo;
  real_T *b_SignalPower;
  b_SignalPower = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  b_EbNo = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "communication_toolbox", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st, *b_EbNo, *b_SignalPower);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T *b_EbNo;
  real_T *b_SignalPower;
  b_SignalPower = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  b_EbNo = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  *moduleInstance->b_y0 = mw__internal__call__step(moduleInstance, &st, *b_EbNo,
    *b_SignalPower, *moduleInstance->u0);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_mjL3UKLNYALOGRxG37ef3C *moduleInstance)
{
  static uint32_T uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
    1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
    2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
    951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
    1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
    1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
    3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
    1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
    761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
    3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
    699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
    1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
    4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
    3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
    4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
    170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
    1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
    1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
    1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
    3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
    501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
    1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
    2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
    2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
    4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
    2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
    2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
    3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
    733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
    1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
    627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
    3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
    3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
    3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
    354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
    1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
    1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
    3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
    2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
    2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
    548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
    1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
    3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
    2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
    191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
    3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
    396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
    3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
    2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
    3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
    1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
    1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
    976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
    2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
    766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
    3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
    1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
    607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
    3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
    1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
    2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
    4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
    551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
    3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
    1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
    552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
    181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
    3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
    4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
    478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
    3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
    786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
    2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
    4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
    4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
    3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
    3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
    370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
    3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
    1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
    2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
    2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
    4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
    1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
    506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
    138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
    3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
    1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
    2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
    643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
    1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
    4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
    4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
    1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
    3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
    3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
    3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
    190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
    2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
    453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
    4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
    2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
    363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
    1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
    2844269403U, 79981964U, 624U };

  int32_T i;
  for (i = 0; i < 625; i++) {
    moduleInstance->state[i] = uv[i];
  }

  moduleInstance->seed = 0U;
  moduleInstance->seed_not_empty = true;
  moduleInstance->method = 7U;
  moduleInstance->method_not_empty = true;
  moduleInstance->state_not_empty = true;
  for (i = 0; i < 2; i++) {
    moduleInstance->b_state[i] = 158852560U * (uint32_T)i + 362436069U;
  }

  moduleInstance->b_state_not_empty = true;
  moduleInstance->c_state = 1144108930U;
  moduleInstance->c_state_not_empty = true;
}

static void mw__internal__call__setup(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance, const emlrtStack *sp, real_T b_EbNo, real_T b_SignalPower)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &g_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    f_st.site = &e_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.TunablePropsChanged = false;
    f_st.site = &f_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
    st.site = &h_emlrtRSI;
    b_st.site = &e_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &h_emlrtRSI;
    AWGNChannelBase_set_EbNo(&st, &moduleInstance->sysobj, b_EbNo);
    st.site = &i_emlrtRSI;
    b_st.site = &e_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &i_emlrtRSI;
    AWGNChannelBase_set_SignalPower(&st, &moduleInstance->sysobj, b_SignalPower);
  }

  st.site = &j_emlrtRSI;
  SystemCore_setup(moduleInstance, &st, &moduleInstance->sysobj);
}

static void AWGNChannelBase_set_EbNo(const emlrtStack *sp,
  comm_internal_AWGNChannel *obj, real_T val)
{
  static const int32_T iv[2] = { 1, 21 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T d_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T b_u[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T f_u[4] = { 'E', 'b', 'N', 'o' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[46];
  char_T u[21];
  char_T e_u[4];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &k_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &l_emlrtRSI;
  p = true;
  if (muDoubleScalarIsNaN(val)) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 21; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 46; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      e_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 4, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    c_st.site = &vc_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  obj->EbNo = val;
}

static void AWGNChannelBase_set_SignalPower(const emlrtStack *sp,
  comm_internal_AWGNChannel *obj, real_T val)
{
  static const int32_T iv[2] = { 1, 23 };

  static const int32_T iv1[2] = { 1, 21 };

  static const int32_T iv2[2] = { 1, 48 };

  static const int32_T iv3[2] = { 1, 21 };

  static const int32_T iv4[2] = { 1, 46 };

  static const int32_T iv5[2] = { 1, 11 };

  static const int32_T iv6[2] = { 1, 46 };

  static const int32_T iv7[2] = { 1, 11 };

  static const int32_T iv8[2] = { 1, 11 };

  static char_T f_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T j_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T l_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T b_u[23] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T e_u[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T i_u[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T k_u[11] = { 'S', 'i', 'g', 'n', 'a', 'l', 'P', 'o', 'w', 'e',
    'r' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T d_u[48];
  char_T g_u[46];
  char_T u[23];
  char_T c_u[21];
  char_T h_u[11];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &m_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &l_emlrtRSI;
  p = true;
  if (val <= 0.0) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 23; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 23, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 48, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 11; i++) {
      h_u[i] = k_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&b_st, 11, m, &h_u[0]);
    emlrtAssign(&f_y, m);
    c_st.site = &wc_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, c_y, f_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }

  b_st.site = &l_emlrtRSI;
  p = true;
  if (muDoubleScalarIsNaN(val)) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 21; i++) {
      c_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 46; i++) {
      g_u[i] = j_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &g_u[0]);
    emlrtAssign(&e_y, m);
    for (i = 0; i < 11; i++) {
      h_u[i] = k_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&b_st, 11, m, &h_u[0]);
    emlrtAssign(&h_y, m);
    c_st.site = &vc_emlrtRSI;
    error(&c_st, b_y, getString(&c_st, message(&c_st, e_y, h_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  b_st.site = &l_emlrtRSI;
  p = true;
  if (!((!muDoubleScalarIsInf(val)) && (!muDoubleScalarIsNaN(val)))) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 21; i++) {
      c_u[i] = i_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 46; i++) {
      g_u[i] = l_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &g_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 11; i++) {
      h_u[i] = k_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&b_st, 11, m, &h_u[0]);
    emlrtAssign(&i_y, m);
    c_st.site = &uc_emlrtRSI;
    error(&c_st, d_y, getString(&c_st, message(&c_st, g_y, i_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  obj->SignalPower = val;
}

static void SystemCore_setup(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance, const emlrtStack *sp, comm_internal_AWGNChannel *obj)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static const int32_T iv3[2] = { 1, 22 };

  static const int32_T iv4[2] = { 1, 22 };

  static const int32_T iv5[2] = { 1, 49 };

  static const int32_T iv6[2] = { 1, 49 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T h_u[49] = { 'c', 'o', 'm', 'm', ':', 's', 'y', 's', 't', 'e',
    'm', ':', 'A', 'W', 'G', 'N', 'C', 'h', 'a', 'n', 'n', 'e', 'l', ':', 'I',
    'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'g', 'n', 'a', 'l', 'I', 'n', 'p',
    'u', 't', 'N', 'u', 'm', 'C', 'h', 'a', 'n' };

  static char_T f_u[22] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'n', 'g',
    ':', 'b', 'a', 'd', 'S', 'e', 't', 't', 'i', 'n', 'g', 's' };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  time_t b_eTime;
  time_t eTime;
  cell_wrap varSizes[1];
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *y;
  real_T dv[4];
  real_T s;
  real_T x;
  int32_T exitg1;
  int32_T r;
  int32_T t;
  uint32_T b_r;
  char_T u[51];
  char_T g_u[49];
  char_T e_u[22];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (obj->isInitialized != 0) {
    for (r = 0; r < 51; r++) {
      u[r] = b_u[r];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (r = 0; r < 51; r++) {
      u[r] = b_u[r];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (r = 0; r < 5; r++) {
      c_u[r] = d_u[r];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &f_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &f_emlrtRSI;
  for (r = 0; r < 8; r++) {
    varSizes[0].f1[r] = 1U;
  }

  obj->inputVarSize[0] = varSizes[0];
  st.site = &f_emlrtRSI;
  b_st.site = &n_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  d_st.site = &u_emlrtRSI;
  x = now() * 8.64E+6;
  s = b_mod(muDoubleScalarFloor(x));
  d_st.site = &v_emlrtRSI;
  eTime = time(NULL);
  do {
    exitg1 = 0;
    d_st.site = &w_emlrtRSI;
    b_eTime = time(NULL);
    if ((int32_T)b_eTime <= (int32_T)eTime + 1) {
      d_st.site = &x_emlrtRSI;
      x = now() * 8.64E+6;
      if (s != b_mod(muDoubleScalarFloor(x))) {
        exitg1 = 1;
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  x = muDoubleScalarRound(s);
  if (x < 4.294967296E+9) {
    if (x >= 0.0) {
      moduleInstance->seed = (uint32_T)x;
    } else {
      moduleInstance->seed = 0U;
    }
  } else if (x >= 4.294967296E+9) {
    moduleInstance->seed = MAX_uint32_T;
  } else {
    moduleInstance->seed = 0U;
  }

  if (moduleInstance->method == 7U) {
    c_st.site = &r_emlrtRSI;
    d_st.site = &y_emlrtRSI;
    e_st.site = &ab_emlrtRSI;
    b_r = moduleInstance->seed;
    moduleInstance->state[0] = moduleInstance->seed;
    for (r = 0; r < 623; r++) {
      b_r = ((b_r ^ b_r >> 30U) * 1812433253U + (uint32_T)r) + 1U;
      moduleInstance->state[r + 1] = b_r;
    }

    moduleInstance->state[624] = 624U;
  } else if (moduleInstance->method == 5U) {
    c_st.site = &s_emlrtRSI;
    moduleInstance->b_state[0] = 362436069U;
    moduleInstance->b_state[1] = moduleInstance->seed;
    if (moduleInstance->b_state[1] == 0U) {
      moduleInstance->b_state[1] = 521288629U;
    }
  } else if (moduleInstance->method == 4U) {
    c_st.site = &t_emlrtRSI;
    d_st.site = &bb_emlrtRSI;
    e_st.site = &cb_emlrtRSI;
    r = (int32_T)(moduleInstance->seed >> 16U);
    t = (int32_T)(moduleInstance->seed & 32768U);
    moduleInstance->c_state = ((((moduleInstance->seed - ((uint32_T)r << 16U)) -
      (uint32_T)t) << 16U) + (uint32_T)t) + (uint32_T)r;
    if (moduleInstance->c_state < 1U) {
      moduleInstance->c_state = 1144108930U;
    } else if (moduleInstance->c_state > 2147483646U) {
      moduleInstance->c_state = 2147483646U;
    }
  } else {
    for (r = 0; r < 22; r++) {
      e_u[r] = f_u[r];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 22, m, &e_u[0]);
    emlrtAssign(&d_y, m);
    for (r = 0; r < 22; r++) {
      e_u[r] = f_u[r];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&b_st, 22, m, &e_u[0]);
    emlrtAssign(&e_y, m);
    c_st.site = &cd_emlrtRSI;
    error(&c_st, d_y, getString(&c_st, b_message(&c_st, e_y, &e_emlrtMCI),
           &e_emlrtMCI), &e_emlrtMCI);
  }

  b_st.site = &o_emlrtRSI;
  obj->pStream.SavedPolarValue = 0.0;
  obj->pStream.HaveSavedPolarValue = false;
  c_st.site = &db_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  e_st.site = &hb_emlrtRSI;
  d_st.site = &gb_emlrtRSI;
  mt19937ar_reset(&obj->pStream.MtGenerator, 67U);
  obj->pStream.Generator = &obj->pStream.MtGenerator;
  obj->pStream.NtMethod = coder_internal_RngNt_ziggurat;
  b_st.site = &p_emlrtRSI;
  for (r = 0; r < 4; r++) {
    dv[r] = 1.0;
  }

  obj->pNumChanFromProp = maximum(dv);
  c_st.site = &ib_emlrtRSI;
  AWGNChannelBase_getStandardDeviation(&c_st, obj);
  if ((obj->pNumChanFromProp != 1.0) && (obj->pNumChanFromProp != 1.0)) {
    for (r = 0; r < 49; r++) {
      g_u[r] = h_u[r];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&b_st, 49, m, &g_u[0]);
    emlrtAssign(&f_y, m);
    for (r = 0; r < 49; r++) {
      g_u[r] = h_u[r];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&b_st, 49, m, &g_u[0]);
    emlrtAssign(&g_y, m);
    c_st.site = &bd_emlrtRSI;
    error(&c_st, f_y, getString(&c_st, b_message(&c_st, g_y, &f_emlrtMCI),
           &f_emlrtMCI), &f_emlrtMCI);
  }

  obj->pFirstInputNumChan = 1.0;
  obj->pIsVarChannel = false;
  st.site = &f_emlrtRSI;
  SystemCore_checkTunablePropChange(&st, obj);
  obj->TunablePropsChanged = false;
}

static real_T now(void)
{
  time_t rawtime;
  struct tm expl_temp;
  real_T y;
  int32_T r;
  int16_T cDaysMonthWise[12];
  boolean_T guard1 = false;
  cDaysMonthWise[0] = 0;
  cDaysMonthWise[1] = 31;
  cDaysMonthWise[2] = 59;
  cDaysMonthWise[3] = 90;
  cDaysMonthWise[4] = 120;
  cDaysMonthWise[5] = 151;
  cDaysMonthWise[6] = 181;
  cDaysMonthWise[7] = 212;
  cDaysMonthWise[8] = 243;
  cDaysMonthWise[9] = 273;
  cDaysMonthWise[10] = 304;
  cDaysMonthWise[11] = 334;
  time(&rawtime);
  expl_temp = *localtime(&rawtime);
  y = ((((365.0 * (real_T)(expl_temp.tm_year + 1900) + muDoubleScalarCeil
          ((real_T)(expl_temp.tm_year + 1900) / 4.0)) - muDoubleScalarCeil
         ((real_T)(expl_temp.tm_year + 1900) / 100.0)) + muDoubleScalarCeil
        ((real_T)(expl_temp.tm_year + 1900) / 400.0)) + (real_T)
       cDaysMonthWise[expl_temp.tm_mon]) + (real_T)expl_temp.tm_mday;
  if (expl_temp.tm_mon + 1 > 2) {
    if (expl_temp.tm_year + 1900 == 0) {
      r = 0;
    } else {
      r = (int32_T)muDoubleScalarRem((real_T)(expl_temp.tm_year + 1900), 4.0);
      if (r == 0) {
        r = 0;
      } else if (expl_temp.tm_year + 1900 < 0) {
        r += 4;
      }
    }

    guard1 = false;
    if (r == 0) {
      if (expl_temp.tm_year + 1900 == 0) {
        r = 0;
      } else {
        r = (int32_T)muDoubleScalarRem((real_T)(expl_temp.tm_year + 1900), 100.0);
        if (r == 0) {
          r = 0;
        } else if (expl_temp.tm_year + 1900 < 0) {
          r += 100;
        }
      }

      if (r != 0) {
        y++;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (expl_temp.tm_year + 1900 == 0) {
        r = 0;
      } else {
        r = (int32_T)muDoubleScalarRem((real_T)(expl_temp.tm_year + 1900), 400.0);
        if (r == 0) {
          r = 0;
        } else if (expl_temp.tm_year + 1900 < 0) {
          r += 400;
        }
      }

      if (r == 0) {
        y++;
      }
    }
  }

  y += (((real_T)expl_temp.tm_hour * 3600.0 + (real_T)expl_temp.tm_min * 60.0) +
        (real_T)expl_temp.tm_sec) / 86400.0;
  return y;
}

static real_T b_mod(real_T x)
{
  real_T r;
  if (muDoubleScalarIsNaN(x) || muDoubleScalarIsInf(x)) {
    r = rtNaN;
  } else if (x == 0.0) {
    r = 0.0;
  } else {
    r = muDoubleScalarRem(x, 2.147483647E+9);
    if (r == 0.0) {
      r = 0.0;
    } else if (x < 0.0) {
      r += 2.147483647E+9;
    }
  }

  return r;
}

static void mt19937ar_reset(coder_internal_mt19937ar *obj, uint32_T varargin_1)
{
  int32_T statei;
  uint32_T r;
  if (varargin_1 == 0U) {
    obj->Seed = 5489U;
  } else {
    obj->Seed = varargin_1;
  }

  r = obj->Seed;
  obj->State[0] = r;
  for (statei = 0; statei < 623; statei++) {
    r = ((r ^ r >> 30U) * 1812433253U + (uint32_T)statei) + 1U;
    obj->State[statei + 1] = r;
  }

  obj->State[624] = 624U;
}

static real_T maximum(real_T x[4])
{
  real_T ex;
  int32_T idx;
  int32_T k;
  boolean_T exitg1;
  if (!muDoubleScalarIsNaN(x[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (!muDoubleScalarIsNaN(x[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = x[0];
  } else {
    ex = x[idx - 1];
    for (k = idx + 1; k < 5; k++) {
      if (ex < x[k - 1]) {
        ex = x[k - 1];
      }
    }
  }

  return ex;
}

static void AWGNChannelBase_getStandardDeviation(const emlrtStack *sp,
  comm_internal_AWGNChannel *obj)
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T b_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T d_u[4] = { 's', 'q', 'r', 't' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T b;
  int32_T i;
  char_T u[30];
  char_T c_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b = obj->EbNo / 10.0;
  st.site = &jb_emlrtRSI;
  b = obj->SignalPower / (muDoubleScalarPower(10.0, b) * 3.0);
  if (b < 0.0) {
    for (i = 0; i < 30; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &tc_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &h_emlrtMCI),
           &h_emlrtMCI), &h_emlrtMCI);
  }

  obj->pStd = 0.0;
  obj->pStd = muDoubleScalarSqrt(b);
}

static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  comm_internal_AWGNChannel *obj)
{
  static const int32_T iv[2] = { 1, 44 };

  static const int32_T iv1[2] = { 1, 44 };

  static char_T b_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[44];
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 44, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 44, m, &u[0]);
    emlrtAssign(&b_y, m);
    st.site = &f_emlrtRSI;
    error(&st, y, getString(&st, b_message(&st, b_y, &d_emlrtMCI), &d_emlrtMCI),
          &d_emlrtMCI);
  }
}

static void mw__internal__call__reset(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance, const emlrtStack *sp, real_T b_EbNo, real_T b_SignalPower)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 44 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 44 };

  static const int32_T iv4[2] = { 1, 5 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static char_T f_u[5] = { 'r', 'e', 's', 'e', 't' };

  comm_internal_AWGNChannel *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  uint32_T nseed;
  char_T u[45];
  char_T c_u[44];
  char_T e_u[5];
  boolean_T tunablePropChangedBeforeResetImpl;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &g_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    f_st.site = &e_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.TunablePropsChanged = false;
    f_st.site = &f_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
    st.site = &h_emlrtRSI;
    b_st.site = &e_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &h_emlrtRSI;
    AWGNChannelBase_set_EbNo(&st, &moduleInstance->sysobj, b_EbNo);
    st.site = &i_emlrtRSI;
    b_st.site = &e_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &i_emlrtRSI;
    AWGNChannelBase_set_SignalPower(&st, &moduleInstance->sysobj, b_SignalPower);
  }

  st.site = &kb_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 5; i++) {
      e_u[i] = f_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &e_u[0]);
    emlrtAssign(&e_y, m);
    b_st.site = &f_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, c_y, e_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = moduleInstance->sysobj.TunablePropsChanged;
  if (moduleInstance->sysobj.isInitialized == 1) {
    b_st.site = &f_emlrtRSI;
    c_st.site = &ob_emlrtRSI;
    d_st.site = &pb_emlrtRSI;
    nseed = moduleInstance->sysobj.pStream.Generator->Seed;
    d_st.site = &qb_emlrtRSI;
    mt19937ar_reset(obj->pStream.Generator, nseed);
  }

  if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
      moduleInstance->sysobj.TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 44, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 44; i++) {
      c_u[i] = d_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 44, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &f_emlrtRSI;
    error(&b_st, b_y, getString(&b_st, b_message(&b_st, d_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
  }
}

static creal_T mw__internal__call__step(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance, const emlrtStack *sp, real_T b_EbNo, real_T b_SignalPower,
  creal_T b_u0)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 49 };

  static const int32_T iv3[2] = { 1, 53 };

  static const int32_T iv4[2] = { 1, 4 };

  static const int32_T iv5[2] = { 1, 49 };

  static const int32_T iv6[2] = { 1, 53 };

  static char_T g_u[53] = { 'c', 'o', 'm', 'm', ':', 's', 'y', 's', 't', 'e',
    'm', ':', 'A', 'W', 'G', 'N', 'C', 'h', 'a', 'n', 'n', 'e', 'l', ':', 'P',
    'r', 'o', 'p', 's', 'N', 'o', 't', 'S', 'c', 'a', 'l', 'a', 'r', 's', 'F',
    'o', 'r', 'V', 'a', 'r', 'C', 'h', 'a', 'n', 'n', 'e', 'l', 's' };

  static char_T f_u[49] = { 'c', 'o', 'm', 'm', ':', 's', 'y', 's', 't', 'e',
    'm', ':', 'A', 'W', 'G', 'N', 'C', 'h', 'a', 'n', 'n', 'e', 'l', ':', 'I',
    'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'g', 'n', 'a', 'l', 'I', 'n', 'p',
    'u', 't', 'N', 'u', 'm', 'C', 'h', 'a', 'n' };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T h_u[4] = { 's', 't', 'e', 'p' };

  coder_internal_mt19937ar *b_obj;
  comm_internal_AWGNChannel *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *y;
  creal_T c_y0;
  real_T dv[4];
  real_T b_std;
  real_T im;
  real_T randData_im;
  real_T randData_re;
  coder_internal_RngNt nt;
  int32_T k;
  uint32_T nseed;
  char_T d_u[53];
  char_T c_u[49];
  char_T u[45];
  char_T e_u[4];
  boolean_T exitg1;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &g_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    f_st.site = &e_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.TunablePropsChanged = false;
    f_st.site = &f_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
    st.site = &h_emlrtRSI;
    b_st.site = &e_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &h_emlrtRSI;
    AWGNChannelBase_set_EbNo(&st, &moduleInstance->sysobj, b_EbNo);
    st.site = &i_emlrtRSI;
    b_st.site = &e_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &i_emlrtRSI;
    AWGNChannelBase_set_SignalPower(&st, &moduleInstance->sysobj, b_SignalPower);
  }

  if (moduleInstance->sysobj.EbNo != b_EbNo) {
    st.site = &lb_emlrtRSI;
    b_st.site = &e_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &lb_emlrtRSI;
    AWGNChannelBase_set_EbNo(&st, &moduleInstance->sysobj, b_EbNo);
  }

  if (moduleInstance->sysobj.SignalPower != b_SignalPower) {
    st.site = &mb_emlrtRSI;
    b_st.site = &e_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &mb_emlrtRSI;
    AWGNChannelBase_set_SignalPower(&st, &moduleInstance->sysobj, b_SignalPower);
  }

  st.site = &nb_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      u[k] = b_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 45; k++) {
      u[k] = b_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 4; k++) {
      e_u[k] = h_u[k];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &e_u[0]);
    emlrtAssign(&e_y, m);
    b_st.site = &f_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, e_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
  }

  if (moduleInstance->sysobj.isInitialized != 1) {
    b_st.site = &f_emlrtRSI;
    c_st.site = &f_emlrtRSI;
    SystemCore_setup(moduleInstance, &c_st, obj);
    c_st.site = &f_emlrtRSI;
    d_st.site = &ob_emlrtRSI;
    e_st.site = &pb_emlrtRSI;
    nseed = moduleInstance->sysobj.pStream.Generator->Seed;
    e_st.site = &qb_emlrtRSI;
    mt19937ar_reset(obj->pStream.Generator, nseed);
  }

  b_st.site = &f_emlrtRSI;
  if (moduleInstance->sysobj.TunablePropsChanged) {
    moduleInstance->sysobj.TunablePropsChanged = false;
    c_st.site = &f_emlrtRSI;
    for (k = 0; k < 4; k++) {
      dv[k] = 1.0;
    }

    moduleInstance->sysobj.pNumChanFromProp = maximum(dv);
    d_st.site = &rb_emlrtRSI;
    AWGNChannelBase_getStandardDeviation(&d_st, obj);
  }

  b_st.site = &f_emlrtRSI;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (moduleInstance->sysobj.inputVarSize[0].f1[k] != 1U) {
      for (k = 0; k < 8; k++) {
        moduleInstance->sysobj.inputVarSize[0].f1[k] = 1U;
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  b_st.site = &f_emlrtRSI;
  if (moduleInstance->sysobj.pIsVarChannel ||
      ((!moduleInstance->sysobj.pIsVarChannel) &&
       (moduleInstance->sysobj.pFirstInputNumChan != 1.0))) {
    if (moduleInstance->sysobj.pNumChanFromProp != 1.0) {
      for (k = 0; k < 53; k++) {
        d_u[k] = g_u[k];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&b_st, 53, m, &d_u[0]);
      emlrtAssign(&d_y, m);
      for (k = 0; k < 53; k++) {
        d_u[k] = g_u[k];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv6[0]);
      emlrtInitCharArrayR2013a(&b_st, 53, m, &d_u[0]);
      emlrtAssign(&g_y, m);
      c_st.site = &yc_emlrtRSI;
      error(&c_st, d_y, getString(&c_st, b_message(&c_st, g_y, &i_emlrtMCI),
             &i_emlrtMCI), &i_emlrtMCI);
    }

    if (!moduleInstance->sysobj.pIsVarChannel) {
      moduleInstance->sysobj.pIsVarChannel = true;
    }
  } else if ((moduleInstance->sysobj.pNumChanFromProp != 1.0) &&
             (moduleInstance->sysobj.pNumChanFromProp != 1.0)) {
    for (k = 0; k < 49; k++) {
      c_u[k] = f_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 49, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    for (k = 0; k < 49; k++) {
      c_u[k] = f_u[k];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&b_st, 49, m, &c_u[0]);
    emlrtAssign(&f_y, m);
    c_st.site = &ad_emlrtRSI;
    error(&c_st, c_y, getString(&c_st, b_message(&c_st, f_y, &j_emlrtMCI),
           &j_emlrtMCI), &j_emlrtMCI);
  }

  b_std = moduleInstance->sysobj.pStd;
  c_st.site = &sb_emlrtRSI;
  nt = moduleInstance->sysobj.pStream.NtMethod;
  if (nt == coder_internal_RngNt_ziggurat) {
    d_st.site = &tb_emlrtRSI;
    b_obj = moduleInstance->sysobj.pStream.Generator;
    e_st.site = &vb_emlrtRSI;
    randData_im = mt19937ar_mtziggurat(&e_st, b_obj);
    e_st.site = &wb_emlrtRSI;
    im = mt19937ar_mtziggurat(&e_st, b_obj);
    if (im == 0.0) {
      randData_re = randData_im / 1.4142135623730951;
      randData_im = 0.0;
    } else if (randData_im == 0.0) {
      randData_re = 0.0;
      randData_im = im / 1.4142135623730951;
    } else {
      randData_re = randData_im / 1.4142135623730951;
      randData_im = im / 1.4142135623730951;
    }
  } else {
    d_st.site = &ub_emlrtRSI;
    if (moduleInstance->sysobj.pStream.NtMethod == coder_internal_RngNt_ziggurat)
    {
      e_st.site = &dc_emlrtRSI;
      f_st.site = &gc_emlrtRSI;
      randData_im = RandStream_zigguratGenrandn(&f_st, &obj->pStream);
      f_st.site = &hc_emlrtRSI;
      im = RandStream_zigguratGenrandn(&f_st, &obj->pStream);
      if (im == 0.0) {
        randData_re = randData_im / 1.4142135623730951;
        randData_im = 0.0;
      } else if (randData_im == 0.0) {
        randData_re = 0.0;
        randData_im = im / 1.4142135623730951;
      } else {
        randData_re = randData_im / 1.4142135623730951;
        randData_im = im / 1.4142135623730951;
      }
    } else if (moduleInstance->sysobj.pStream.NtMethod ==
               coder_internal_RngNt_polar) {
      e_st.site = &ec_emlrtRSI;
      f_st.site = &nc_emlrtRSI;
      randData_im = RandStream_polarGenrandn(&f_st, &obj->pStream);
      f_st.site = &oc_emlrtRSI;
      im = RandStream_polarGenrandn(&f_st, &obj->pStream);
      if (im == 0.0) {
        randData_re = randData_im / 1.4142135623730951;
        randData_im = 0.0;
      } else if (randData_im == 0.0) {
        randData_re = 0.0;
        randData_im = im / 1.4142135623730951;
      } else {
        randData_re = randData_im / 1.4142135623730951;
        randData_im = im / 1.4142135623730951;
      }
    } else {
      e_st.site = &fc_emlrtRSI;
      f_st.site = &qc_emlrtRSI;
      randData_im = RandStream_inversionGenrandn(&f_st, &obj->pStream);
      f_st.site = &rc_emlrtRSI;
      im = RandStream_inversionGenrandn(&f_st, &obj->pStream);
      if (im == 0.0) {
        randData_re = randData_im / 1.4142135623730951;
        randData_im = 0.0;
      } else if (randData_im == 0.0) {
        randData_re = 0.0;
        randData_im = im / 1.4142135623730951;
      } else {
        randData_re = randData_im / 1.4142135623730951;
        randData_im = im / 1.4142135623730951;
      }
    }
  }

  c_y0.re = b_u0.re + b_std * randData_re;
  c_y0.im = b_u0.im + b_std * randData_im;
  b_st.site = &f_emlrtRSI;
  SystemCore_checkTunablePropChange(&b_st, obj);
  return c_y0;
}

static real_T mt19937ar_mtziggurat(const emlrtStack *sp,
  coder_internal_mt19937ar *obj)
{
  static real_T dv[257] = { 0.0, 0.215241895984875, 0.286174591792068,
    0.335737519214422, 0.375121332878378, 0.408389134611989, 0.43751840220787,
    0.46363433679088, 0.487443966139235, 0.50942332960209, 0.529909720661557,
    0.549151702327164, 0.567338257053817, 0.584616766106378, 0.601104617755991,
    0.61689699000775, 0.63207223638606, 0.646695714894993, 0.660822574244419,
    0.674499822837293, 0.687767892795788, 0.700661841106814, 0.713212285190975,
    0.725446140909999, 0.737387211434295, 0.749056662017815, 0.760473406430107,
    0.771654424224568, 0.782615023307232, 0.793369058840623, 0.80392911698997,
    0.814306670135215, 0.824512208752291, 0.834555354086381, 0.844444954909153,
    0.854189171008163, 0.863795545553308, 0.87327106808886, 0.882622229585165,
    0.891855070732941, 0.900975224461221, 0.909987953496718, 0.91889818364959,
    0.927710533401999, 0.936429340286575, 0.945058684468165, 0.953602409881086,
    0.96206414322304, 0.970447311064224, 0.978755155294224, 0.986990747099062,
    0.99515699963509, 1.00325667954467, 1.01129241744, 1.01926671746548,
    1.02718196603564, 1.03504043983344, 1.04284431314415, 1.05059566459093,
    1.05829648333067, 1.06594867476212, 1.07355406579244, 1.0811144097034,
    1.08863139065398, 1.09610662785202, 1.10354167942464, 1.11093804601357,
    1.11829717411934, 1.12562045921553, 1.13290924865253, 1.14016484436815,
    1.14738850542085, 1.15458145035993, 1.16174485944561, 1.16887987673083,
    1.17598761201545, 1.18306914268269, 1.19012551542669, 1.19715774787944,
    1.20416683014438, 1.2111537262437, 1.21811937548548, 1.22506469375653,
    1.23199057474614, 1.23889789110569, 1.24578749554863, 1.2526602218949,
    1.25951688606371, 1.26635828701823, 1.27318520766536, 1.27999841571382,
    1.28679866449324, 1.29358669373695, 1.30036323033084, 1.30712898903073,
    1.31388467315022, 1.32063097522106, 1.32736857762793, 1.33409815321936,
    1.3408203658964, 1.34753587118059, 1.35424531676263, 1.36094934303328,
    1.36764858359748, 1.37434366577317, 1.38103521107586, 1.38772383568998,
    1.39441015092814, 1.40109476367925, 1.4077782768464, 1.41446128977547,
    1.42114439867531, 1.42782819703026, 1.43451327600589, 1.44120022484872,
    1.44788963128058, 1.45458208188841, 1.46127816251028, 1.46797845861808,
    1.47468355569786, 1.48139403962819, 1.48811049705745, 1.49483351578049,
    1.50156368511546, 1.50830159628131, 1.51504784277671, 1.521803020761,
    1.52856772943771, 1.53534257144151, 1.542128153229, 1.54892508547417,
    1.55573398346918, 1.56255546753104, 1.56939016341512, 1.57623870273591,
    1.58310172339603, 1.58997987002419, 1.59687379442279, 1.60378415602609,
    1.61071162236983, 1.61765686957301, 1.62462058283303, 1.63160345693487,
    1.63860619677555, 1.64562951790478, 1.65267414708306, 1.65974082285818,
    1.66683029616166, 1.67394333092612, 1.68108070472517, 1.68824320943719,
    1.69543165193456, 1.70264685479992, 1.7098896570713, 1.71716091501782,
    1.72446150294804, 1.73179231405296, 1.73915426128591, 1.74654827828172,
    1.75397532031767, 1.76143636531891, 1.76893241491127, 1.77646449552452,
    1.78403365954944, 1.79164098655216, 1.79928758454972, 1.80697459135082,
    1.81470317596628, 1.82247454009388, 1.83028991968276, 1.83815058658281,
    1.84605785028518, 1.8540130597602, 1.86201760539967, 1.87007292107127,
    1.878180486293, 1.88634182853678, 1.8945585256707, 1.90283220855043,
    1.91116456377125, 1.91955733659319, 1.92801233405266, 1.93653142827569,
    1.94511656000868, 1.95376974238465, 1.96249306494436, 1.97128869793366,
    1.98015889690048, 1.98910600761744, 1.99813247135842, 2.00724083056053,
    2.0164337349062, 2.02571394786385, 2.03508435372962, 2.04454796521753,
    2.05410793165065, 2.06376754781173, 2.07353026351874, 2.0833996939983,
    2.09337963113879, 2.10347405571488, 2.11368715068665, 2.12402331568952,
    2.13448718284602, 2.14508363404789, 2.15581781987674, 2.16669518035431,
    2.17772146774029, 2.18890277162636, 2.20024554661128, 2.21175664288416,
    2.22344334009251, 2.23531338492992, 2.24737503294739, 2.25963709517379,
    2.27210899022838, 2.28480080272449, 2.29772334890286, 2.31088825060137,
    2.32430801887113, 2.33799614879653, 2.35196722737914, 2.36623705671729,
    2.38082279517208, 2.39574311978193, 2.41101841390112, 2.42667098493715,
    2.44272531820036, 2.4592083743347, 2.47614993967052, 2.49358304127105,
    2.51154444162669, 2.53007523215985, 2.54922155032478, 2.56903545268184,
    2.58957598670829, 2.61091051848882, 2.63311639363158, 2.65628303757674,
    2.68051464328574, 2.70593365612306, 2.73268535904401, 2.76094400527999,
    2.79092117400193, 2.82287739682644, 2.85713873087322, 2.89412105361341,
    2.93436686720889, 2.97860327988184, 3.02783779176959, 3.08352613200214,
    3.147889289518, 3.2245750520478, 3.32024473383983, 3.44927829856143,
    3.65415288536101, 3.91075795952492 };

  static real_T dv1[257] = { 1.0, 0.977101701267673, 0.959879091800108,
    0.9451989534423, 0.932060075959231, 0.919991505039348, 0.908726440052131,
    0.898095921898344, 0.887984660755834, 0.878309655808918, 0.869008688036857,
    0.860033621196332, 0.851346258458678, 0.842915653112205, 0.834716292986884,
    0.826726833946222, 0.818929191603703, 0.811307874312656, 0.803849483170964,
    0.796542330422959, 0.789376143566025, 0.782341832654803, 0.775431304981187,
    0.768637315798486, 0.761953346836795, 0.755373506507096, 0.748892447219157,
    0.742505296340151, 0.736207598126863, 0.729995264561476, 0.72386453346863,
    0.717811932630722, 0.711834248878248, 0.705928501332754, 0.700091918136512,
    0.694321916126117, 0.688616083004672, 0.682972161644995, 0.677388036218774,
    0.671861719897082, 0.66639134390875, 0.660975147776663, 0.655611470579697,
    0.650298743110817, 0.645035480820822, 0.639820277453057, 0.634651799287624,
    0.629528779924837, 0.624450015547027, 0.619414360605834, 0.614420723888914,
    0.609468064925773, 0.604555390697468, 0.599681752619125, 0.594846243767987,
    0.590047996332826, 0.585286179263371, 0.580559996100791, 0.575868682972354,
    0.571211506735253, 0.566587763256165, 0.561996775814525, 0.557437893618766,
    0.552910490425833, 0.548413963255266, 0.543947731190026, 0.539511234256952,
    0.535103932380458, 0.530725304403662, 0.526374847171684, 0.522052074672322,
    0.517756517229756, 0.513487720747327, 0.509245245995748, 0.505028667943468,
    0.500837575126149, 0.49667156905249, 0.492530263643869, 0.488413284705458,
    0.484320269426683, 0.480250865909047, 0.476204732719506, 0.47218153846773,
    0.468180961405694, 0.464202689048174, 0.460246417812843, 0.456311852678716,
    0.452398706861849, 0.448506701507203, 0.444635565395739, 0.440785034665804,
    0.436954852547985, 0.433144769112652, 0.429354541029442, 0.425583931338022,
    0.421832709229496, 0.418100649837848, 0.414387534040891, 0.410693148270188,
    0.407017284329473, 0.403359739221114, 0.399720314980197, 0.396098818515832,
    0.392495061459315, 0.388908860018789, 0.385340034840077, 0.381788410873393,
    0.378253817245619, 0.374736087137891, 0.371235057668239, 0.367750569779032,
    0.364282468129004, 0.360830600989648, 0.357394820145781, 0.353974980800077,
    0.350570941481406, 0.347182563956794, 0.343809713146851, 0.340452257044522,
    0.337110066637006, 0.333783015830718, 0.330470981379163, 0.327173842813601,
    0.323891482376391, 0.320623784956905, 0.317370638029914, 0.314131931596337,
    0.310907558126286, 0.307697412504292, 0.30450139197665, 0.301319396100803,
    0.298151326696685, 0.294997087799962, 0.291856585617095, 0.288729728482183,
    0.285616426815502, 0.282516593083708, 0.279430141761638, 0.276356989295668,
    0.273297054068577, 0.270250256365875, 0.267216518343561, 0.264195763997261,
    0.261187919132721, 0.258192911337619, 0.255210669954662, 0.252241126055942,
    0.249284212418529, 0.246339863501264, 0.24340801542275, 0.240488605940501,
    0.237581574431238, 0.23468686187233, 0.231804410824339, 0.228934165414681,
    0.226076071322381, 0.223230075763918, 0.220396127480152, 0.217574176724331,
    0.214764175251174, 0.211966076307031, 0.209179834621125, 0.206405406397881,
    0.203642749310335, 0.200891822494657, 0.198152586545776, 0.195425003514135,
    0.192709036903589, 0.190004651670465, 0.187311814223801, 0.1846304924268,
    0.181960655599523, 0.179302274522848, 0.176655321443735, 0.174019770081839,
    0.171395595637506, 0.168782774801212, 0.166181285764482, 0.163591108232366,
    0.161012223437511, 0.158444614155925, 0.15588826472448, 0.153343161060263,
    0.150809290681846, 0.148286642732575, 0.145775208005994, 0.143274978973514,
    0.140785949814445, 0.138308116448551, 0.135841476571254, 0.133386029691669,
    0.130941777173644, 0.12850872228, 0.126086870220186, 0.123676228201597,
    0.12127680548479, 0.11888861344291, 0.116511665625611, 0.114145977827839,
    0.111791568163838, 0.109448457146812, 0.107116667774684, 0.104796225622487,
    0.102487158941935, 0.10018949876881, 0.0979032790388625, 0.095628536713009,
    0.093365311912691, 0.0911136480663738, 0.0888735920682759,
    0.0866451944505581, 0.0844285095703535, 0.082223595813203,
    0.0800305158146631, 0.0778493367020961, 0.0756801303589272,
    0.0735229737139814, 0.0713779490588905, 0.0692451443970068,
    0.0671246538277886, 0.065016577971243, 0.0629210244377582, 0.06083810834954,
    0.0587679529209339, 0.0567106901062031, 0.0546664613248891,
    0.0526354182767924, 0.0506177238609479, 0.0486135532158687,
    0.0466230949019305, 0.0446465522512946, 0.0426841449164746,
    0.0407361106559411, 0.0388027074045262, 0.0368842156885674,
    0.0349809414617162, 0.0330932194585786, 0.0312214171919203,
    0.0293659397581334, 0.0275272356696031, 0.0257058040085489,
    0.0239022033057959, 0.0221170627073089, 0.0203510962300445,
    0.0186051212757247, 0.0168800831525432, 0.0151770883079353,
    0.0134974506017399, 0.0118427578579079, 0.0102149714397015,
    0.00861658276939875, 0.00705087547137324, 0.00552240329925101,
    0.00403797259336304, 0.00260907274610216, 0.0012602859304986,
    0.000477467764609386 };

  emlrtStack st;
  real_T u;
  real_T x;
  real_T z;
  int32_T exitg1;
  int32_T i;
  uint32_T u32[2];
  st.prev = sp;
  st.tls = sp->tls;
  do {
    exitg1 = 0;
    st.site = &xb_emlrtRSI;
    mt19937ar_genrand_uint32_vector(obj, u32);
    i = (int32_T)((u32[1] >> 24U) + 1U);
    z = (((real_T)(u32[0] >> 3U) * 1.6777216E+7 + (real_T)((int32_T)u32[1] &
           16777215)) * 2.2204460492503131E-16 - 1.0) * dv[i];
    if (muDoubleScalarAbs(z) <= dv[i - 1]) {
      exitg1 = 1;
    } else if (i < 256) {
      st.site = &yb_emlrtRSI;
      u = mt19937ar_genrandu(&st, obj);
      if (dv1[i] + u * (dv1[i - 1] - dv1[i]) < muDoubleScalarExp(-0.5 * z * z))
      {
        exitg1 = 1;
      }
    } else {
      do {
        st.site = &ac_emlrtRSI;
        u = mt19937ar_genrandu(&st, obj);
        x = muDoubleScalarLog(u) * 0.273661237329758;
        st.site = &bc_emlrtRSI;
        u = mt19937ar_genrandu(&st, obj);
      } while (!(-2.0 * muDoubleScalarLog(u) > x * x));

      if (z < 0.0) {
        z = x - 3.65415288536101;
      } else {
        z = 3.65415288536101 - x;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return z;
}

static void mt19937ar_genrand_uint32_vector(coder_internal_mt19937ar *obj,
  uint32_T u[2])
{
  int32_T j;
  int32_T kk;
  uint32_T statei;
  uint32_T y;
  for (j = 0; j < 2; j++) {
    statei = obj->State[624] + 1U;
    if (statei >= 625U) {
      for (kk = 0; kk < 227; kk++) {
        y = (obj->State[kk] & 2147483648U) | (obj->State[kk + 1] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        obj->State[kk] = obj->State[kk + 397] ^ y;
      }

      for (kk = 0; kk < 396; kk++) {
        y = (obj->State[kk + 227] & 2147483648U) | (obj->State[kk + 228] &
          2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        obj->State[kk + 227] = obj->State[kk] ^ y;
      }

      y = (obj->State[623] & 2147483648U) | (obj->State[0] & 2147483647U);
      if ((y & 1U) == 0U) {
        y >>= 1U;
      } else {
        y = y >> 1U ^ 2567483615U;
      }

      obj->State[623] = obj->State[396] ^ y;
      statei = 1U;
    }

    y = obj->State[(int32_T)statei - 1];
    obj->State[624] = statei;
    y ^= y >> 11U;
    y ^= y << 7U & 2636928640U;
    y ^= y << 15U & 4022730752U;
    y ^= y >> 18U;
    u[j] = y;
  }
}

static real_T mt19937ar_genrandu(const emlrtStack *sp, coder_internal_mt19937ar *
  obj)
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T c_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T r;
  int32_T exitg1;
  int32_T i;
  uint32_T u[2];
  char_T b_u[37];
  st.prev = sp;
  st.tls = sp->tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on: */
  /*  */
  /*  A C-program for MT19937, with initialization improved 2002/1/26. */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
  /*  */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
  /*  All rights reserved. */
  /*  */
  /*  Redistribution and use in source and binary forms, with or without */
  /*  modification, are permitted provided that the following conditions */
  /*  are met: */
  /*  */
  /*    1. Redistributions of source code must retain the above copyright */
  /*       notice, this list of conditions and the following disclaimer. */
  /*  */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer */
  /*       in the documentation and/or other materials provided with the */
  /*       distribution. */
  /*  */
  /*    3. The names of its contributors may not be used to endorse or */
  /*       promote products derived from this software without specific */
  /*       prior written permission. */
  /*  */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
  /*  */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    st.site = &cc_emlrtRSI;
    mt19937ar_genrand_uint32_vector(obj, u);
    u[0] >>= 5U;
    u[1] >>= 6U;
    r = 1.1102230246251565E-16 * ((real_T)u[0] * 6.7108864E+7 + (real_T)u[1]);
    if (r == 0.0) {
      if (!is_valid_state(obj->State)) {
        for (i = 0; i < 37; i++) {
          b_u[i] = c_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 37, m, &b_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 37; i++) {
          b_u[i] = c_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 37, m, &b_u[0]);
        emlrtAssign(&b_y, m);
        st.site = &xc_emlrtRSI;
        error(&st, y, getString(&st, b_message(&st, b_y, &k_emlrtMCI),
               &k_emlrtMCI), &k_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static boolean_T is_valid_state(uint32_T mt[625])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T isvalid;
  if ((mt[624] >= 1U) && (mt[624] < 625U)) {
    isvalid = true;
  } else {
    isvalid = false;
  }

  if (isvalid) {
    isvalid = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k + 1 < 625)) {
      if (mt[k] == 0U) {
        k++;
      } else {
        isvalid = true;
        exitg1 = true;
      }
    }
  }

  return isvalid;
}

static real_T RandStream_zigguratGenrandn(const emlrtStack *sp,
  coder_internal_RandStream *s)
{
  static real_T dv[257] = { 0.0, 0.215241895984875, 0.286174591792068,
    0.335737519214422, 0.375121332878378, 0.408389134611989, 0.43751840220787,
    0.46363433679088, 0.487443966139235, 0.50942332960209, 0.529909720661557,
    0.549151702327164, 0.567338257053817, 0.584616766106378, 0.601104617755991,
    0.61689699000775, 0.63207223638606, 0.646695714894993, 0.660822574244419,
    0.674499822837293, 0.687767892795788, 0.700661841106814, 0.713212285190975,
    0.725446140909999, 0.737387211434295, 0.749056662017815, 0.760473406430107,
    0.771654424224568, 0.782615023307232, 0.793369058840623, 0.80392911698997,
    0.814306670135215, 0.824512208752291, 0.834555354086381, 0.844444954909153,
    0.854189171008163, 0.863795545553308, 0.87327106808886, 0.882622229585165,
    0.891855070732941, 0.900975224461221, 0.909987953496718, 0.91889818364959,
    0.927710533401999, 0.936429340286575, 0.945058684468165, 0.953602409881086,
    0.96206414322304, 0.970447311064224, 0.978755155294224, 0.986990747099062,
    0.99515699963509, 1.00325667954467, 1.01129241744, 1.01926671746548,
    1.02718196603564, 1.03504043983344, 1.04284431314415, 1.05059566459093,
    1.05829648333067, 1.06594867476212, 1.07355406579244, 1.0811144097034,
    1.08863139065398, 1.09610662785202, 1.10354167942464, 1.11093804601357,
    1.11829717411934, 1.12562045921553, 1.13290924865253, 1.14016484436815,
    1.14738850542085, 1.15458145035993, 1.16174485944561, 1.16887987673083,
    1.17598761201545, 1.18306914268269, 1.19012551542669, 1.19715774787944,
    1.20416683014438, 1.2111537262437, 1.21811937548548, 1.22506469375653,
    1.23199057474614, 1.23889789110569, 1.24578749554863, 1.2526602218949,
    1.25951688606371, 1.26635828701823, 1.27318520766536, 1.27999841571382,
    1.28679866449324, 1.29358669373695, 1.30036323033084, 1.30712898903073,
    1.31388467315022, 1.32063097522106, 1.32736857762793, 1.33409815321936,
    1.3408203658964, 1.34753587118059, 1.35424531676263, 1.36094934303328,
    1.36764858359748, 1.37434366577317, 1.38103521107586, 1.38772383568998,
    1.39441015092814, 1.40109476367925, 1.4077782768464, 1.41446128977547,
    1.42114439867531, 1.42782819703026, 1.43451327600589, 1.44120022484872,
    1.44788963128058, 1.45458208188841, 1.46127816251028, 1.46797845861808,
    1.47468355569786, 1.48139403962819, 1.48811049705745, 1.49483351578049,
    1.50156368511546, 1.50830159628131, 1.51504784277671, 1.521803020761,
    1.52856772943771, 1.53534257144151, 1.542128153229, 1.54892508547417,
    1.55573398346918, 1.56255546753104, 1.56939016341512, 1.57623870273591,
    1.58310172339603, 1.58997987002419, 1.59687379442279, 1.60378415602609,
    1.61071162236983, 1.61765686957301, 1.62462058283303, 1.63160345693487,
    1.63860619677555, 1.64562951790478, 1.65267414708306, 1.65974082285818,
    1.66683029616166, 1.67394333092612, 1.68108070472517, 1.68824320943719,
    1.69543165193456, 1.70264685479992, 1.7098896570713, 1.71716091501782,
    1.72446150294804, 1.73179231405296, 1.73915426128591, 1.74654827828172,
    1.75397532031767, 1.76143636531891, 1.76893241491127, 1.77646449552452,
    1.78403365954944, 1.79164098655216, 1.79928758454972, 1.80697459135082,
    1.81470317596628, 1.82247454009388, 1.83028991968276, 1.83815058658281,
    1.84605785028518, 1.8540130597602, 1.86201760539967, 1.87007292107127,
    1.878180486293, 1.88634182853678, 1.8945585256707, 1.90283220855043,
    1.91116456377125, 1.91955733659319, 1.92801233405266, 1.93653142827569,
    1.94511656000868, 1.95376974238465, 1.96249306494436, 1.97128869793366,
    1.98015889690048, 1.98910600761744, 1.99813247135842, 2.00724083056053,
    2.0164337349062, 2.02571394786385, 2.03508435372962, 2.04454796521753,
    2.05410793165065, 2.06376754781173, 2.07353026351874, 2.0833996939983,
    2.09337963113879, 2.10347405571488, 2.11368715068665, 2.12402331568952,
    2.13448718284602, 2.14508363404789, 2.15581781987674, 2.16669518035431,
    2.17772146774029, 2.18890277162636, 2.20024554661128, 2.21175664288416,
    2.22344334009251, 2.23531338492992, 2.24737503294739, 2.25963709517379,
    2.27210899022838, 2.28480080272449, 2.29772334890286, 2.31088825060137,
    2.32430801887113, 2.33799614879653, 2.35196722737914, 2.36623705671729,
    2.38082279517208, 2.39574311978193, 2.41101841390112, 2.42667098493715,
    2.44272531820036, 2.4592083743347, 2.47614993967052, 2.49358304127105,
    2.51154444162669, 2.53007523215985, 2.54922155032478, 2.56903545268184,
    2.58957598670829, 2.61091051848882, 2.63311639363158, 2.65628303757674,
    2.68051464328574, 2.70593365612306, 2.73268535904401, 2.76094400527999,
    2.79092117400193, 2.82287739682644, 2.85713873087322, 2.89412105361341,
    2.93436686720889, 2.97860327988184, 3.02783779176959, 3.08352613200214,
    3.147889289518, 3.2245750520478, 3.32024473383983, 3.44927829856143,
    3.65415288536101, 3.91075795952492 };

  static real_T dv1[257] = { 1.0, 0.977101701267673, 0.959879091800108,
    0.9451989534423, 0.932060075959231, 0.919991505039348, 0.908726440052131,
    0.898095921898344, 0.887984660755834, 0.878309655808918, 0.869008688036857,
    0.860033621196332, 0.851346258458678, 0.842915653112205, 0.834716292986884,
    0.826726833946222, 0.818929191603703, 0.811307874312656, 0.803849483170964,
    0.796542330422959, 0.789376143566025, 0.782341832654803, 0.775431304981187,
    0.768637315798486, 0.761953346836795, 0.755373506507096, 0.748892447219157,
    0.742505296340151, 0.736207598126863, 0.729995264561476, 0.72386453346863,
    0.717811932630722, 0.711834248878248, 0.705928501332754, 0.700091918136512,
    0.694321916126117, 0.688616083004672, 0.682972161644995, 0.677388036218774,
    0.671861719897082, 0.66639134390875, 0.660975147776663, 0.655611470579697,
    0.650298743110817, 0.645035480820822, 0.639820277453057, 0.634651799287624,
    0.629528779924837, 0.624450015547027, 0.619414360605834, 0.614420723888914,
    0.609468064925773, 0.604555390697468, 0.599681752619125, 0.594846243767987,
    0.590047996332826, 0.585286179263371, 0.580559996100791, 0.575868682972354,
    0.571211506735253, 0.566587763256165, 0.561996775814525, 0.557437893618766,
    0.552910490425833, 0.548413963255266, 0.543947731190026, 0.539511234256952,
    0.535103932380458, 0.530725304403662, 0.526374847171684, 0.522052074672322,
    0.517756517229756, 0.513487720747327, 0.509245245995748, 0.505028667943468,
    0.500837575126149, 0.49667156905249, 0.492530263643869, 0.488413284705458,
    0.484320269426683, 0.480250865909047, 0.476204732719506, 0.47218153846773,
    0.468180961405694, 0.464202689048174, 0.460246417812843, 0.456311852678716,
    0.452398706861849, 0.448506701507203, 0.444635565395739, 0.440785034665804,
    0.436954852547985, 0.433144769112652, 0.429354541029442, 0.425583931338022,
    0.421832709229496, 0.418100649837848, 0.414387534040891, 0.410693148270188,
    0.407017284329473, 0.403359739221114, 0.399720314980197, 0.396098818515832,
    0.392495061459315, 0.388908860018789, 0.385340034840077, 0.381788410873393,
    0.378253817245619, 0.374736087137891, 0.371235057668239, 0.367750569779032,
    0.364282468129004, 0.360830600989648, 0.357394820145781, 0.353974980800077,
    0.350570941481406, 0.347182563956794, 0.343809713146851, 0.340452257044522,
    0.337110066637006, 0.333783015830718, 0.330470981379163, 0.327173842813601,
    0.323891482376391, 0.320623784956905, 0.317370638029914, 0.314131931596337,
    0.310907558126286, 0.307697412504292, 0.30450139197665, 0.301319396100803,
    0.298151326696685, 0.294997087799962, 0.291856585617095, 0.288729728482183,
    0.285616426815502, 0.282516593083708, 0.279430141761638, 0.276356989295668,
    0.273297054068577, 0.270250256365875, 0.267216518343561, 0.264195763997261,
    0.261187919132721, 0.258192911337619, 0.255210669954662, 0.252241126055942,
    0.249284212418529, 0.246339863501264, 0.24340801542275, 0.240488605940501,
    0.237581574431238, 0.23468686187233, 0.231804410824339, 0.228934165414681,
    0.226076071322381, 0.223230075763918, 0.220396127480152, 0.217574176724331,
    0.214764175251174, 0.211966076307031, 0.209179834621125, 0.206405406397881,
    0.203642749310335, 0.200891822494657, 0.198152586545776, 0.195425003514135,
    0.192709036903589, 0.190004651670465, 0.187311814223801, 0.1846304924268,
    0.181960655599523, 0.179302274522848, 0.176655321443735, 0.174019770081839,
    0.171395595637506, 0.168782774801212, 0.166181285764482, 0.163591108232366,
    0.161012223437511, 0.158444614155925, 0.15588826472448, 0.153343161060263,
    0.150809290681846, 0.148286642732575, 0.145775208005994, 0.143274978973514,
    0.140785949814445, 0.138308116448551, 0.135841476571254, 0.133386029691669,
    0.130941777173644, 0.12850872228, 0.126086870220186, 0.123676228201597,
    0.12127680548479, 0.11888861344291, 0.116511665625611, 0.114145977827839,
    0.111791568163838, 0.109448457146812, 0.107116667774684, 0.104796225622487,
    0.102487158941935, 0.10018949876881, 0.0979032790388625, 0.095628536713009,
    0.093365311912691, 0.0911136480663738, 0.0888735920682759,
    0.0866451944505581, 0.0844285095703535, 0.082223595813203,
    0.0800305158146631, 0.0778493367020961, 0.0756801303589272,
    0.0735229737139814, 0.0713779490588905, 0.0692451443970068,
    0.0671246538277886, 0.065016577971243, 0.0629210244377582, 0.06083810834954,
    0.0587679529209339, 0.0567106901062031, 0.0546664613248891,
    0.0526354182767924, 0.0506177238609479, 0.0486135532158687,
    0.0466230949019305, 0.0446465522512946, 0.0426841449164746,
    0.0407361106559411, 0.0388027074045262, 0.0368842156885674,
    0.0349809414617162, 0.0330932194585786, 0.0312214171919203,
    0.0293659397581334, 0.0275272356696031, 0.0257058040085489,
    0.0239022033057959, 0.0221170627073089, 0.0203510962300445,
    0.0186051212757247, 0.0168800831525432, 0.0151770883079353,
    0.0134974506017399, 0.0118427578579079, 0.0102149714397015,
    0.00861658276939875, 0.00705087547137324, 0.00552240329925101,
    0.00403797259336304, 0.00260907274610216, 0.0012602859304986,
    0.000477467764609386 };

  emlrtStack st;
  real_T u[2];
  real_T x;
  real_T z;
  int32_T exitg1;
  uint32_T ik;
  st.prev = sp;
  st.tls = sp->tls;
  do {
    exitg1 = 0;
    st.site = &ic_emlrtRSI;
    RandStream_rand(&st, s, u);
    ik = (uint32_T)(256.0 * u[0]) + 1U;
    z = (2.0 * u[1] - 1.0) * dv[(int32_T)ik];
    if (muDoubleScalarAbs(z) <= dv[(int32_T)ik - 1]) {
      exitg1 = 1;
    } else if (ik < 256U) {
      st.site = &jc_emlrtRSI;
      u[0] = b_RandStream_rand(&st, s);
      if (dv1[(int32_T)ik] + u[0] * (dv1[(int32_T)ik - 1] - dv1[(int32_T)ik]) <
          muDoubleScalarExp(-0.5 * z * z)) {
        exitg1 = 1;
      }
    } else {
      do {
        st.site = &kc_emlrtRSI;
        RandStream_rand(&st, s, u);
        x = muDoubleScalarLog(u[0]) * 0.273661237329758;
      } while (!(x * x < -2.0 * muDoubleScalarLog(u[1])));

      if (z < 0.0) {
        z = x - 3.65415288536101;
      } else {
        z = 3.65415288536101 - x;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return z;
}

static void RandStream_rand(const emlrtStack *sp, coder_internal_RandStream *s,
  real_T u[2])
{
  coder_internal_mt19937ar *obj;
  emlrtStack b_st;
  emlrtStack st;
  real_T r;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &lc_emlrtRSI;
  obj = s->Generator;
  for (k = 0; k < 2; k++) {
    b_st.site = &mc_emlrtRSI;
    r = b_mt19937ar_genrandu(&b_st, obj);
    u[k] = r;
  }
}

static real_T b_mt19937ar_genrandu(const emlrtStack *sp,
  coder_internal_mt19937ar *obj)
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T c_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T r;
  int32_T exitg1;
  int32_T i;
  uint32_T u[2];
  char_T b_u[37];
  st.prev = sp;
  st.tls = sp->tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on: */
  /*  */
  /*  A C-program for MT19937, with initialization improved 2002/1/26. */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
  /*  */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
  /*  All rights reserved. */
  /*  */
  /*  Redistribution and use in source and binary forms, with or without */
  /*  modification, are permitted provided that the following conditions */
  /*  are met: */
  /*  */
  /*    1. Redistributions of source code must retain the above copyright */
  /*       notice, this list of conditions and the following disclaimer. */
  /*  */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer */
  /*       in the documentation and/or other materials provided with the */
  /*       distribution. */
  /*  */
  /*    3. The names of its contributors may not be used to endorse or */
  /*       promote products derived from this software without specific */
  /*       prior written permission. */
  /*  */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
  /*  */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    st.site = &cc_emlrtRSI;
    mt19937ar_genrand_uint32_vector(obj, u);
    u[0] >>= 5U;
    u[1] >>= 6U;
    r = 1.1102230246251565E-16 * ((real_T)u[0] * 6.7108864E+7 + (real_T)u[1]);
    if (r == 0.0) {
      if (!is_valid_state(obj->State)) {
        for (i = 0; i < 37; i++) {
          b_u[i] = c_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 37, m, &b_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 37; i++) {
          b_u[i] = c_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 37, m, &b_u[0]);
        emlrtAssign(&b_y, m);
        st.site = &xc_emlrtRSI;
        error(&st, y, getString(&st, b_message(&st, b_y, &k_emlrtMCI),
               &k_emlrtMCI), &k_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static real_T b_RandStream_rand(const emlrtStack *sp, coder_internal_RandStream *
  s)
{
  coder_internal_mt19937ar *obj;
  emlrtStack b_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &lc_emlrtRSI;
  obj = s->Generator;
  b_st.site = &mc_emlrtRSI;
  return b_mt19937ar_genrandu(&b_st, obj);
}

static real_T RandStream_polarGenrandn(const emlrtStack *sp,
  coder_internal_RandStream *rs)
{
  emlrtStack st;
  real_T u[2];
  real_T r;
  real_T s;
  real_T t;
  real_T z;
  st.prev = sp;
  st.tls = sp->tls;
  if (rs->HaveSavedPolarValue) {
    rs->HaveSavedPolarValue = false;
    z = rs->SavedPolarValue;
  } else {
    do {
      st.site = &pc_emlrtRSI;
      RandStream_rand(&st, rs, u);
      r = 2.0 * u[0] - 1.0;
      s = 2.0 * u[1] - 1.0;
      t = r * r + s * s;
    } while (!(t <= 1.0));

    t = muDoubleScalarSqrt(-2.0 * muDoubleScalarLog(t) / t);
    z = r * t;
    rs->HaveSavedPolarValue = true;
    rs->SavedPolarValue = s * t;
  }

  return z;
}

static real_T RandStream_inversionGenrandn(const emlrtStack *sp,
  coder_internal_RandStream *s)
{
  emlrtStack st;
  real_T r;
  real_T u;
  real_T z;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &sc_emlrtRSI;
  u = b_RandStream_rand(&st, s);
  if (muDoubleScalarAbs(u - 0.5) <= 0.425) {
    r = 0.180625 - (u - 0.5) * (u - 0.5);
    z = (u - 0.5) * (((((((2509.0809287301227 * r + 33430.575583588128) * r +
                          67265.7709270087) * r + 45921.95393154987) * r +
                        13731.693765509461) * r + 1971.5909503065513) * r +
                      133.14166789178438) * r + 3.3871328727963665) /
      (((((((5226.4952788528544 * r + 28729.085735721943) * r +
            39307.895800092709) * r + 21213.794301586597) * r +
          5394.1960214247511) * r + 687.18700749205789) * r + 42.313330701600911)
       * r + 1.0);
  } else {
    if (u - 0.5 < 0.0) {
      r = muDoubleScalarSqrt(-muDoubleScalarLog(u));
    } else {
      r = muDoubleScalarSqrt(-muDoubleScalarLog(1.0 - u));
    }

    if (r <= 5.0) {
      r -= 1.6;
      z = (((((((0.00077454501427834139 * r + 0.022723844989269184) * r +
                0.24178072517745061) * r + 1.2704582524523684) * r +
              3.6478483247632045) * r + 5.769497221460691) * r +
            4.6303378461565456) * r + 1.4234371107496835) /
        (((((((1.0507500716444169E-9 * r + 0.00054759380849953455) * r +
              0.015198666563616457) * r + 0.14810397642748008) * r +
            0.6897673349851) * r + 1.6763848301838038) * r + 2.053191626637759) *
         r + 1.0);
    } else {
      r -= 5.0;
      z = (((((((2.0103343992922881E-7 * r + 2.7115555687434876E-5) * r +
                0.0012426609473880784) * r + 0.026532189526576124) * r +
              0.29656057182850487) * r + 1.7848265399172913) * r +
            5.4637849111641144) * r + 6.6579046435011033) /
        (((((((2.0442631033899397E-15 * r + 1.4215117583164459E-7) * r +
              1.8463183175100548E-5) * r + 0.00078686913114561329) * r +
            0.014875361290850615) * r + 0.13692988092273581) * r +
          0.599832206555888) * r + 1.0);
    }

    if (u - 0.5 < 0.0) {
      z = -z;
    }
  }

  return z;
}

static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
    "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "getString",
    true, location);
}

static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "error",
                        true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "message",
    true, location);
}

static void init_simulink_io_address(InstanceStruct_mjL3UKLNYALOGRxG37ef3C
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (creal_T *)cgxertGetInputPortSignal(moduleInstance->S, 0);
  moduleInstance->b_y0 = (creal_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    0);
}

/* CGXE Glue Code */
static void mdlOutputs_mjL3UKLNYALOGRxG37ef3C(SimStruct *S, int_T tid)
{
  InstanceStruct_mjL3UKLNYALOGRxG37ef3C *moduleInstance =
    (InstanceStruct_mjL3UKLNYALOGRxG37ef3C *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_mjL3UKLNYALOGRxG37ef3C(SimStruct *S)
{
  InstanceStruct_mjL3UKLNYALOGRxG37ef3C *moduleInstance =
    (InstanceStruct_mjL3UKLNYALOGRxG37ef3C *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_mjL3UKLNYALOGRxG37ef3C(SimStruct *S, int_T tid)
{
  InstanceStruct_mjL3UKLNYALOGRxG37ef3C *moduleInstance =
    (InstanceStruct_mjL3UKLNYALOGRxG37ef3C *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_mjL3UKLNYALOGRxG37ef3C(SimStruct *S)
{
  InstanceStruct_mjL3UKLNYALOGRxG37ef3C *moduleInstance =
    (InstanceStruct_mjL3UKLNYALOGRxG37ef3C *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_mjL3UKLNYALOGRxG37ef3C(SimStruct *S)
{
  InstanceStruct_mjL3UKLNYALOGRxG37ef3C *moduleInstance =
    (InstanceStruct_mjL3UKLNYALOGRxG37ef3C *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_mjL3UKLNYALOGRxG37ef3C(SimStruct *S)
{
  InstanceStruct_mjL3UKLNYALOGRxG37ef3C *moduleInstance =
    (InstanceStruct_mjL3UKLNYALOGRxG37ef3C *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_mjL3UKLNYALOGRxG37ef3C(SimStruct *S)
{
  InstanceStruct_mjL3UKLNYALOGRxG37ef3C *moduleInstance =
    (InstanceStruct_mjL3UKLNYALOGRxG37ef3C *)calloc(1, sizeof
    (InstanceStruct_mjL3UKLNYALOGRxG37ef3C));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_mjL3UKLNYALOGRxG37ef3C);
  ssSetmdlInitializeConditions(S, mdlInitialize_mjL3UKLNYALOGRxG37ef3C);
  ssSetmdlUpdate(S, mdlUpdate_mjL3UKLNYALOGRxG37ef3C);
  ssSetmdlTerminate(S, mdlTerminate_mjL3UKLNYALOGRxG37ef3C);
  ssSetmdlEnable(S, mdlEnable_mjL3UKLNYALOGRxG37ef3C);
  ssSetmdlDisable(S, mdlDisable_mjL3UKLNYALOGRxG37ef3C);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_mjL3UKLNYALOGRxG37ef3C(SimStruct *S)
{
}

void method_dispatcher_mjL3UKLNYALOGRxG37ef3C(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_mjL3UKLNYALOGRxG37ef3C(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_mjL3UKLNYALOGRxG37ef3C(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: mjL3UKLNYALOGRxG37ef3C.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_mjL3UKLNYALOGRxG37ef3C_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  double * pointer;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,1);
  elem_6 = mxCreateString("<time.h>");
  mxSetCell(elem_5,0,elem_6);
  mxSetCell(elem_3,1,elem_5);
  elem_7 = mxCreateCellMatrix(1,1);
  elem_8 = mxCreateString("");
  mxSetCell(elem_7,0,elem_8);
  mxSetCell(elem_3,2,elem_7);
  elem_9 = mxCreateCellMatrix(1,1);
  elem_10 = mxCreateString("");
  mxSetCell(elem_9,0,elem_10);
  mxSetCell(elem_3,3,elem_9);
  mxSetCell(elem_1,1,elem_3);
  elem_11 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_11);
  elem_12 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_12);
  elem_13 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_13);
  elem_14 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_14);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_15 = mxCreateDoubleMatrix(0,0, mxREAL);
  pointer = mxGetPr(elem_15);
  mxSetCell(mxBIArgs,1,elem_15);
  elem_16 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_16);
  return mxBIArgs;
}

mxArray *cgxe_mjL3UKLNYALOGRxG37ef3C_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("incompatibleFunction");
  mxArray* incompatibleSymbol = mxCreateString("time");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
