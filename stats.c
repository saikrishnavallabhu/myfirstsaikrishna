#include "stats.h"
#include <stdio.h>
#include <stdlib.h>

// Function to print statistics
void print_statistics(unsigned char *array, unsigned int size) {
    printf("Minimum: %d\n", find_minimum(array, size));
    printf("Maximum: %d\n", find_maximum(array, size));
    printf("Mean: %d\n", find_mean(array, size));
    printf("Median: %d\n", find_median(array, size));
}

// Function to print the array
void print_array(unsigned char *array, unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Function to find the median
unsigned char find_median(unsigned char *array, unsigned int size) {
    sort_array(array, size);
    if (size % 2 == 0) {
        return (array[size/2 - 1] + array[size/2]) / 2;
    } else {
        return array[size/2];
    }
}

// Function to find the mean
unsigned char find_mean(unsigned char *array, unsigned int size) {
    unsigned int sum = 0;
    for (unsigned int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

// Function to find the maximum
unsigned char find_maximum(unsigned char *array, unsigned int size) {
    unsigned char max = array[0];
    for (unsigned int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

// Function to find the minimum
unsigned char find_minimum(unsigned char *array, unsigned int size) {
    unsigned char min = array[0];
    for (unsigned int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

// Function to sort the array from largest to smallest
void sort_array(unsigned char *array, unsigned int size) {
    for (unsigned int i = 0; i < size - 1; i++) {
        for (unsigned int j = i + 1; j < size; j++) {
            if (array[i] < array[j]) {
                unsigned char temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// Main function
int main() {
    unsigned char test_data[40] = {34, 201, 190, 154, 8, 194, 2, 6, 114, 88,
                                   45, 76, 123, 87, 25, 23, 200, 122, 150, 90,
                                   92, 87, 177, 244, 201, 6, 12, 60, 8, 2,
                                   5, 67, 77, 250, 99, 78, 89, 92, 73, 54};
    unsigned int size = 40;
    
    printf("Original Array:\n");
    print_array(test_data, size);
    
    print_statistics(test_data, size);
    
    printf("Sorted Array:\n");
    sort_array(test_data, size);
    print_array(test_data, size);
    
    return 0;
}
