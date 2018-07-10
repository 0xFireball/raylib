#include "config.h"

// optional modules depend on raylib header
#include "raylib.h"

#if defined(INCLUDE_EASINGS)
    #include "easings.h"
#endif

#if defined(INCLUDE_PHYSAC)
    #define PHYSAC_IMPLEMENTATION
    #include "physac.h"
#endif