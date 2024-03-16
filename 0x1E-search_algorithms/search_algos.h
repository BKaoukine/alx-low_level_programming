#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/*Included Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>


/*Functions Prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);



#endif /* SEARCH_ALGOS */