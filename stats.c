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
  printf("The elements of array before sorting process______________\n");
  print_array(test,SIZE);
  printf("__________________________________________________________\n");
  print_statistics(test, SIZE);
  printf("__________________________________________________________\n");
  printf("The elements of array after sorting process______________\n");
  sort_array(test,SIZE);
  print_array(test,SIZE);
  printf("__________________________________________________________\n");
}
/* Add other Implementation File Code Here */
void print_array(unsigned char* array, int size){
  int j;
  for(j = 0; j < size; j++){
    printf("%d, ",*(array+j));
  }
  printf("\n");
  
}
void print_statistics(unsigned char* array, int size){
  printf("Statistics of array\n");
  printf("Minimum value: %d\n", find_minimum(array, size) );//kontrol et
  printf("Maximum value: %d\n", find_maximum(array, size) );
  printf("Mean value: %d\n", find_mean(array, size) );
  printf("Median value: %d\n", find_median(array, size) );
  
}

unsigned char find_minimum(unsigned char* array, int size){
  int i;
  unsigned char min = *array;
    for(i= 0; i < size ; i++) {
      if(*(array+i) < min ){
        min = *(array + i);
      }
    }
    return min;
}
unsigned char find_maximum(unsigned char* array, int size){
  int i;
  unsigned char max = *array;

    for(i= 0; i < size ; ++i) {
      if((*(array+i)) > max ){
        max = *(array + i);
      }
    }
    return max;
}
unsigned char find_mean(unsigned char* array, int size){
  int i;
  int sum = 0;
  unsigned mean;
   
  for(i= 0; i < size ; ++i) {
    sum += *(array + i);
  }

  mean = sum / size;
  return mean;
}


void sort_array(unsigned char* array, int size){
  int i;
  int k;
  int temp;
  
  for(i = 0; i < size; i++){
    for(k = (i +1); k < size; k++){
      if(*(array+i) < *(array+k)){
        temp = *(array + i);
        *(array + i) = *(array + k);
        *(array + k) = temp;
      }
    }
  }
}

unsigned char find_median(unsigned char* array, int size){
  sort_array(array, size);
  int middle = (size + 1) / 2;
  unsigned char median;
  median = *(array + middle);
  return median;
}

