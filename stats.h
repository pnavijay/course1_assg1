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
 * <3RD CHANGE IN STATS.H HEADER FILE>
 *
 * @Vijay anand <Add FirsName LastName>
 * @23-07-2024 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 


/*Function to sort the data set*/
int* sort_array(unsigned char*, int);


/* Function to print given data set*/
void print_array(int*, int);


/* Function  to find the median in given data set and length*/
int find_median(int*, int);


/* Function  to find the mean in given data set and length*/
int find_mean(int*, int);


/* Function  to find the maximum in given data set and length*/
int find_maximum(int*, int);

/* Function  to find the minimum in given data set and length*/
int find_minimum(int*, int);

/* Function to print the output results of dataset*/
void print_statistics(int, int, int, int);



#endif 
/* __STATS_H__ */
