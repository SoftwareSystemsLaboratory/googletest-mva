// square_root.hh
// This header ensures C linkage is enforced when running C++ unit tessts on C code.

#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif

#include "square_root.h"

#ifdef __cplusplus
}
#endif
