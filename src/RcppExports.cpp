// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Estep
NumericMatrix Estep(NumericVector c, NumericVector c_lt, IntegerVector delta, double alpha, double bbeta, const double& pvfm, const int& dist);
RcppExport SEXP frailtoys_Estep(SEXP cSEXP, SEXP c_ltSEXP, SEXP deltaSEXP, SEXP alphaSEXP, SEXP bbetaSEXP, SEXP pvfmSEXP, SEXP distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type c(cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type c_lt(c_ltSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type bbeta(bbetaSEXP);
    Rcpp::traits::input_parameter< const double& >::type pvfm(pvfmSEXP);
    Rcpp::traits::input_parameter< const int& >::type dist(distSEXP);
    rcpp_result_gen = Rcpp::wrap(Estep(c, c_lt, delta, alpha, bbeta, pvfm, dist));
    return rcpp_result_gen;
END_RCPP
}
// inf_mat_match
NumericVector inf_mat_match(NumericVector left, NumericVector right, NumericVector elp, int maxlength);
RcppExport SEXP frailtoys_inf_mat_match(SEXP leftSEXP, SEXP rightSEXP, SEXP elpSEXP, SEXP maxlengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type left(leftSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type right(rightSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type elp(elpSEXP);
    Rcpp::traits::input_parameter< int >::type maxlength(maxlengthSEXP);
    rcpp_result_gen = Rcpp::wrap(inf_mat_match(left, right, elp, maxlength));
    return rcpp_result_gen;
END_RCPP
}
