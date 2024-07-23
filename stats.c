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
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    int s[SIZE];
    int med, mea, max, min,i;

    int* sorted_array = sort_array(test, SIZE);
    clrscr();
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

}

void print_array(int* array, int size)
{

}

int find_median(int* array, int size)
{

}

int find_mean(int* array, int size) 
{

}

int find_maximum(int* array, int size)
{

}

int find_minimum(int* array, int size)
{

}

void print_statistics(int median, int mean, int max, int min)
{

}
/*end of main */
