#include "heaps_algorithm.h"
#include <stdio.h>
static inline void permute_swap(permute_t *a, permute_t *b)
{
    permute_t tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void permute_print_array(permute_t *arr, size_t size)
{
    for (size_t i = 0; i < size; i++) {
        printf("%s ",
               arr[i]); // TODO: add handling for different possible types of
                        // data at some point!
    }
    printf("\n");
}

void permute_recursive_heaps(permute_t *arr, size_t k, size_t size)
{
    if (k == 1) {
        permute_print_array(arr, size);
        return;
    }
    /*Generate permutations with k-th unaltered
     * Initially k=length(A)*/
    permute_recursive_heaps(arr, k - 1, size);
    /*generate permutations for the k-th swapped
     * with each k-1*/
    for (size_t i = 0; i < (k - 1); i++) {
        // Swap choice is dependent on the parity of k (even or odd)
        if (k % 2 == 0)
            permute_swap(&arr[i], &arr[k - 1]);
        else
            permute_swap(&arr[0], &arr[k - 1]);
        // recursively permute arr's k-1 initial elements
        permute_recursive_heaps(arr, k - 1, size);
    }
}
