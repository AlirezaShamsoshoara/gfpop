// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// gfpopTransfer
List gfpopTransfer(NumericVector vectData, NumericVector vectWeight, DataFrame mygraph, std::string type, double K, double a, double min, double max);
RcppExport SEXP _gfpop_gfpopTransfer(SEXP vectDataSEXP, SEXP vectWeightSEXP, SEXP mygraphSEXP, SEXP typeSEXP, SEXP KSEXP, SEXP aSEXP, SEXP minSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vectData(vectDataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vectWeight(vectWeightSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type mygraph(mygraphSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< double >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(gfpopTransfer(vectData, vectWeight, mygraph, type, K, a, min, max));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gfpop_gfpopTransfer", (DL_FUNC) &_gfpop_gfpopTransfer, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_gfpop(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
