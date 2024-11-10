#ifndef HEAPS_ALGORITHM_H
#define HEAPS_ALGORITHM_H
#include <stddef.h>
/* This algorithm implementation was originally intended to be used as part of a
 * Unix filter where the assumption that the arguments could be treated as
 * strings is valid. The typedef is merely here to facilitate adaptation of the
 * algorithm for potential future reuse with other data types.*/
typedef char *permute_t;

void permute_recursive_heaps(permute_t *arr, size_t k, size_t size);
#endif
