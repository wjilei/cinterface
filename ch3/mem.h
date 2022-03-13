#ifndef MEM_DEFINED
#define MEM_DEFINED

#include <stdlib.h>
#include <string.h>

#define NEW(p) do {\
    p = malloc(sizeof(*p)); \
    memset(p, 0, sizeof(*p)); \
}while(0)


#define FREE(p) do { \
    if(p!=NULL) { \
        free(p); \
        p = NULL; \
    } \
} while(0)


#define ALLOC(size) malloc(size)

#endif