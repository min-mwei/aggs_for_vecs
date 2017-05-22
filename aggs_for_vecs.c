#include <postgres.h>
#include <fmgr.h>
#include <catalog/pg_type.h>
#include <utils/array.h>
#include <utils/builtins.h>
#include <utils/lsyscache.h>
#include <utils/typcache.h>
#include <utils/arrayaccess.h>
#include <math.h>

PG_MODULE_MAGIC;


#include "util.c"
#include "vec_to_mean.c"
// #include "vec_to_median.c"
// #include "vec_to_mode.c"
#include "vec_to_max.c"
#include "vec_to_min.c"
// #include "vec_to_min_max.c"
// #include "vec_to_percentile.c"
// #include "vec_to_percentiles.c"
#include "vec_to_var_samp.c"
// #include "vec_to_skewness.c"
// #include "vec_to_kurtosis.c"
