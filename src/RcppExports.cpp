// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// InfCensCpp
SEXP InfCensCpp(const int n_bootstrap, const int n_obs_censusdata, const Eigen::Map<Eigen::VectorXd> locationeffects, const Eigen::Map<Eigen::VectorXd> residuals, const Eigen::Map<Eigen::MatrixXd> X, const Eigen::Map<Eigen::MatrixXd> beta_sample, int userseed, int ncores);
RcppExport SEXP _ELLsae_InfCensCpp(SEXP n_bootstrapSEXP, SEXP n_obs_censusdataSEXP, SEXP locationeffectsSEXP, SEXP residualsSEXP, SEXP XSEXP, SEXP beta_sampleSEXP, SEXP userseedSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n_bootstrap(n_bootstrapSEXP);
    Rcpp::traits::input_parameter< const int >::type n_obs_censusdata(n_obs_censusdataSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type locationeffects(locationeffectsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type beta_sample(beta_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type userseed(userseedSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(InfCensCpp(n_bootstrap, n_obs_censusdata, locationeffects, residuals, X, beta_sample, userseed, ncores));
    return rcpp_result_gen;
END_RCPP
}
// summaryParC
SEXP summaryParC(Eigen::MatrixXd x, Eigen::VectorXd quantiles, int nrow, int ncol, int ncores);
RcppExport SEXP _ELLsae_summaryParC(SEXP xSEXP, SEXP quantilesSEXP, SEXP nrowSEXP, SEXP ncolSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type x(xSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type quantiles(quantilesSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(summaryParC(x, quantiles, nrow, ncol, ncores));
    return rcpp_result_gen;
END_RCPP
}
// InfCensBigCpp
void InfCensBigCpp(Environment fbm, const int n_bootstrap, const int n_obs_censusdata, const Eigen::Map<Eigen::VectorXd> locationeffects, const Eigen::Map<Eigen::VectorXd> residuals, const Eigen::Map<Eigen::MatrixXd> X, const Eigen::Map<Eigen::MatrixXd> beta_sample, int userseed, int ncores);
RcppExport SEXP _ELLsae_InfCensBigCpp(SEXP fbmSEXP, SEXP n_bootstrapSEXP, SEXP n_obs_censusdataSEXP, SEXP locationeffectsSEXP, SEXP residualsSEXP, SEXP XSEXP, SEXP beta_sampleSEXP, SEXP userseedSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type fbm(fbmSEXP);
    Rcpp::traits::input_parameter< const int >::type n_bootstrap(n_bootstrapSEXP);
    Rcpp::traits::input_parameter< const int >::type n_obs_censusdata(n_obs_censusdataSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type locationeffects(locationeffectsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type beta_sample(beta_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type userseed(userseedSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    InfCensBigCpp(fbm, n_bootstrap, n_obs_censusdata, locationeffects, residuals, X, beta_sample, userseed, ncores);
    return R_NilValue;
END_RCPP
}
// summaryBigParCt
SEXP summaryBigParCt(Eigen::MatrixXd x, Eigen::VectorXd quantiles, int nrow, int ncol, int ncores);
RcppExport SEXP _ELLsae_summaryBigParCt(SEXP xSEXP, SEXP quantilesSEXP, SEXP nrowSEXP, SEXP ncolSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type x(xSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type quantiles(quantilesSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(summaryBigParCt(x, quantiles, nrow, ncol, ncores));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ELLsae_InfCensCpp", (DL_FUNC) &_ELLsae_InfCensCpp, 8},
    {"_ELLsae_summaryParC", (DL_FUNC) &_ELLsae_summaryParC, 5},
    {"_ELLsae_InfCensBigCpp", (DL_FUNC) &_ELLsae_InfCensBigCpp, 9},
    {"_ELLsae_summaryBigParCt", (DL_FUNC) &_ELLsae_summaryBigParCt, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_ELLsae(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
