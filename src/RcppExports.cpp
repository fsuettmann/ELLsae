// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// rowmeanC
SEXP rowmeanC(NumericMatrix x);
RcppExport SEXP _ELLsae_rowmeanC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rowmeanC(x));
    return rcpp_result_gen;
END_RCPP
}
// inferenceCensusC
SEXP inferenceCensusC(const int n_bootstrap, const int n_obs_censusdata, const Eigen::Map<Eigen::VectorXd> locationeffects, const Eigen::Map<Eigen::VectorXd> residuals, const Eigen::Map<Eigen::MatrixXd> X, const Eigen::Map<Eigen::MatrixXd> beta_sample);
RcppExport SEXP _ELLsae_inferenceCensusC(SEXP n_bootstrapSEXP, SEXP n_obs_censusdataSEXP, SEXP locationeffectsSEXP, SEXP residualsSEXP, SEXP XSEXP, SEXP beta_sampleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n_bootstrap(n_bootstrapSEXP);
    Rcpp::traits::input_parameter< const int >::type n_obs_censusdata(n_obs_censusdataSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type locationeffects(locationeffectsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type beta_sample(beta_sampleSEXP);
    rcpp_result_gen = Rcpp::wrap(inferenceCensusC(n_bootstrap, n_obs_censusdata, locationeffects, residuals, X, beta_sample));
    return rcpp_result_gen;
END_RCPP
}
// summaryC
SEXP summaryC(const NumericMatrix& x, const int nrow, const int ncol, const NumericVector& quantiles);
RcppExport SEXP _ELLsae_summaryC(SEXP xSEXP, SEXP nrowSEXP, SEXP ncolSEXP, SEXP quantilesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< const int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type quantiles(quantilesSEXP);
    rcpp_result_gen = Rcpp::wrap(summaryC(x, nrow, ncol, quantiles));
    return rcpp_result_gen;
END_RCPP
}
// funD
Eigen::MatrixXd funD(const int n_bootstrap, const int n_obs_censusdata, const Eigen::Map<Eigen::VectorXd> locationeffects, const Eigen::Map<Eigen::VectorXd> residuals, const Eigen::Map<Eigen::MatrixXd> X, const Eigen::Map<Eigen::MatrixXd> beta_sample, int ncores);
RcppExport SEXP _ELLsae_funD(SEXP n_bootstrapSEXP, SEXP n_obs_censusdataSEXP, SEXP locationeffectsSEXP, SEXP residualsSEXP, SEXP XSEXP, SEXP beta_sampleSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n_bootstrap(n_bootstrapSEXP);
    Rcpp::traits::input_parameter< const int >::type n_obs_censusdata(n_obs_censusdataSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type locationeffects(locationeffectsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type beta_sample(beta_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(funD(n_bootstrap, n_obs_censusdata, locationeffects, residuals, X, beta_sample, ncores));
    return rcpp_result_gen;
END_RCPP
}
// funD2
Eigen::MatrixXd funD2(const int n_bootstrap, const int n_obs_censusdata, const Eigen::Map<Eigen::VectorXd> locationeffects, const Eigen::Map<Eigen::VectorXd> residuals, const Eigen::Map<Eigen::MatrixXd> X, const Eigen::Map<Eigen::MatrixXd> beta_sample, int ncores);
RcppExport SEXP _ELLsae_funD2(SEXP n_bootstrapSEXP, SEXP n_obs_censusdataSEXP, SEXP locationeffectsSEXP, SEXP residualsSEXP, SEXP XSEXP, SEXP beta_sampleSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n_bootstrap(n_bootstrapSEXP);
    Rcpp::traits::input_parameter< const int >::type n_obs_censusdata(n_obs_censusdataSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type locationeffects(locationeffectsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type beta_sample(beta_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(funD2(n_bootstrap, n_obs_censusdata, locationeffects, residuals, X, beta_sample, ncores));
    return rcpp_result_gen;
END_RCPP
}
// rowmeansBigC
NumericVector rowmeansBigC(Environment fbm);
RcppExport SEXP _ELLsae_rowmeansBigC(SEXP fbmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type fbm(fbmSEXP);
    rcpp_result_gen = Rcpp::wrap(rowmeansBigC(fbm));
    return rcpp_result_gen;
END_RCPP
}
// summaryC
SEXP summaryC(const NumericMatrix& x, const NumericVector& quantiles);
RcppExport SEXP _ELLsae_summaryC(SEXP xSEXP, SEXP quantilesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type quantiles(quantilesSEXP);
    rcpp_result_gen = Rcpp::wrap(summaryC(x, quantiles));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ELLsae_rowmeanC", (DL_FUNC) &_ELLsae_rowmeanC, 1},
    {"_ELLsae_inferenceCensusC", (DL_FUNC) &_ELLsae_inferenceCensusC, 6},
    {"_ELLsae_summaryC", (DL_FUNC) &_ELLsae_summaryC, 4},
    {"_ELLsae_funD", (DL_FUNC) &_ELLsae_funD, 7},
    {"_ELLsae_funD2", (DL_FUNC) &_ELLsae_funD2, 7},
    {"_ELLsae_rowmeansBigC", (DL_FUNC) &_ELLsae_rowmeansBigC, 1},
    {"_ELLsae_summaryC", (DL_FUNC) &_ELLsae_summaryC, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_ELLsae(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
