#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void print_array(int *array, size_t inc, size_t size);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
