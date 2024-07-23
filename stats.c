/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <STATS.C>
 *
 * VIJAY ANAND P
 * 23-07-2024
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    int s[SIZE];
    int med, mea, max, min,i;

    int* sorted_array = sort_array(test, SIZE);
    
    for (i = 0; i < SIZE; i++) {
        s[i] = sorted_array[i];
    }

    print_array(s, SIZE);
    med = find_median(s, SIZE);

    mea = find_mean(s, SIZE);
    max = find_maximum(s, SIZE);
    min = find_minimum(s, SIZE);
    print_statistics(med, mea, max, min);

    return 0;

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}


int* sort_array(unsigned char* array, int size)
{

static int sorted_array[SIZE];
    int i,j; 
    for (i = 0; i < size; i++) {
        sorted_array[i] = array[i]; // Implicit conversion from unsigned char to int
    }

    for ( i = 0; i < size - 1; i++) {
        for ( j = i + 1; j < size; j++) {
            if (sorted_array[i] > sorted_array[j]) {
                int temp = sorted_array[i];
                sorted_array[i] = sorted_array[j];
                sorted_array[j] = temp;
            }
        }
    }
    return sorted_array;

}



void print_array(int* array, int size)
{
int i;
    for ( i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int find_median(int* array, int size)
{
if (size % 2 == 0) {
        return (array[size / 2 - 1] + array[size / 2]) / 2;
    } else {
        return array[size / 2];
    }
}


int find_mean(int* array, int size) 
{
int sum = 0;
    int i=0;
    for ( i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}



int find_maximum(int* array, int size)
{
int max = array[0];
    int i=1;
    for (i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}



int find_minimum(int* array, int size)
{
int min = array[0];
        int i=1;
    for ( i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}



void print_statistics(int median, int mean, int max, int min)
{
    printf("Median: %d\n", median);
    printf("Mean: %d\n", mean);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}


/*end of PROGRAM */
