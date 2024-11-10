#include "heaps_algorithm.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[argc + 1])
{
    if (argc < 2) {
        printf("\n%s requires at least 1 arguments!\n", argv[0]);
        return EXIT_FAILURE;
    }
    permute_recursive_heaps(&argv[1], argc - 1, argc - 1);
    return 0;
}
