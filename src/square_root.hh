// square_root.hh
// This header ensures C linkage is enforced when running C++ unit tessts on C code.

#include <math.h>

#ifdef __cplusplus
extern "C" {
#include "square_root.h"
}

#else

#include "square_root.h"

#endif
