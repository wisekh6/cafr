#include <math.h>
#include <stdint.h>
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>
#include <algorithm>

#include "pearson_corr.h"
#include "util.h"

#ifndef CAFR_GEUPGMA_H_
#define CAFR_GEUPGMA_H_


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

SEXP GEUPGMACC(
    SEXP, //sim
    SEXP // x
    );


#ifdef __cplusplus
} //extern C
#endif //__cplusplus

#endif //CAFR_GEUPGMA_H_