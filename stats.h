/******************************************************************************
 * Copyright (C) 2017 by Adem Eren - University of ITU
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file Assesment_1
 * @brief Basic operations on an array
 *
 * This file is about finding statistics about array. Particularly, The following 
 * values of array will be obtained: Minimum value, maximum value, mean value,
 * maximim value, median value. Besides that also sorting process will be performed.
 *
 * @author Adem Eren
 * @date 17/8/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__



/**
 * @brief Finding minimum value of unsigned char array
 *
 * This function takes as inputs an unsigned char array and an integer. 
 * It will return an unsigned char
 *
 * @param array The unsigned char array
 * @param size  The length of unsigned char array
 * @return an unsigned char
 */
unsigned char find_minimum(unsigned char* array, int size);

/**
 * @brief Finding maximum value of unsigned char array
 *
 * This function takes as inputs an unsigned char array and an integer. 
 * It will return an unsigned char
 *
 * @param array The unsigned char array
 * @param size  The length of unsigned char array
 * @return an unsigned char
 */
unsigned char find_maximum(unsigned char* array, int size);

/**
 * @brief Finding mean value of unsigned char array
 *
 * This function takes as inputs an unsigned char array and an integer. 
 * It will return an unsigned char
 *
 * @param array The unsigned char array
 * @param size  The length of unsigned char array
 * @return an unsigned char
 */
unsigned char find_mean(unsigned char* array, int size);

/**
 * @brief Finding median value of unsigned char array
 *
 * This function takes as inputs an unsigned char array and an integer. 
 * It will return an unsigned char
 *
 * @param array The unsigned char array
 * @param size  The length of unsigned char array
 * @return an unsigned char
 */
unsigned char find_median(unsigned char* array, int size);

/**
 * @brief SOrting an unsigned char array from maximum value to minimum value.
 *
 * This function takes as inputs an unsigned char array and an integer. 
 * It will return an unsigned char
 *
 * @param array The unsigned char array
 * @param size  The length of unsigned char array
 * @return an unsigned char
 */
void sort_array(unsigned char* array, int size);


/**
 * @brief Showing the results of functions 
 *
 * This function takes as inputs an unsigned char array and an integer. 
 * It will print statistics of array
 *
 * @param array The unsigned char array
 * @param size  The length of unsigned char array
 */
void print_statistics(unsigned char* array, int size);

/**
 * @brief Showing the elements of an array 
 *
 * This function takes as inputs an unsigned char array and an integer. 
 * It will print elements of an array
 *
 * @param array The unsigned char array
 * @param size  The length of unsigned char array
 */
void print_array(unsigned char* array, int size);

#endif /* __STATS_H__ */
