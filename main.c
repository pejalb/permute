#include "heaps_algorithm.h"
#include <stdio.h>
#define MIN_ARGS (1u)
int main(int argc, char *argv[argc + 1])
{
    if (argc < MIN_ARGS) {
        printf("\n%s requires at least %u arguments!", argv[0], MIN_ARGS);
    }
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    permute_recursive_heaps(arr, size, size);
    printf("\n");
    return 0;
}
