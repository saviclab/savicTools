// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// tad
NumericVector tad(IntegerVector evid, NumericVector time, IntegerVector calc_tad);
RcppExport SEXP _savictools_tad(SEXP evidSEXP, SEXP timeSEXP, SEXP calc_tadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type evid(evidSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type calc_tad(calc_tadSEXP);
    rcpp_result_gen = Rcpp::wrap(tad(evid, time, calc_tad));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_savictools_tad", (DL_FUNC) &_savictools_tad, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_savictools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
