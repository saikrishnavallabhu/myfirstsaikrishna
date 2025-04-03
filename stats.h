// stats.h - Header file
#ifndef STATS_H
#define STATS_H

#include <stdio.h>

// Function Declarations
void print_statistics(unsigned char *array, unsigned int size);
void print_array(unsigned char *array, unsigned int size);
unsigned char find_median(unsigned char *array, unsigned int size);
unsigned char find_mean(unsigned char *array, unsigned int size);
unsigned char find_maximum(unsigned char *array, unsigned int size);
unsigned char find_minimum(unsigned char *array, unsigned int size);
void sort_array(unsigned char *array, unsigned int size);

#endif // STATS_H
