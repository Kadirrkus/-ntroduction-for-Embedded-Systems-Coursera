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
 * @file stats.h 
 * @brief Definitions and macros required for the c1m1 assignment
 
 * @author Abdulkadir Kus
 * @date 22/07/2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__



  void print_statistics(unsigned char minimum,unsigned char max,int mean,unsigned char median) ;
/**
 * @brief Prints the statistics of a given array
 *
 * This function takes the resulting statistics done on an array
 * which are: minimum, maximum, mean and median, and print those
 * values on the screen
 *
 * @param min The minimum number of given array
   @param max The maximum number of given array 
 * @param mean The mean of the given array
 * @param median The median of the given array
 *
 * @return void
 */


 void print_array(unsigned char test[],unsigned int counter);
 
 
/**
 * @brief Prints the elements of the dataset to the console
 *
 * This function iterates over the given array and prints each element 
 * in an unsigned decimal format, separated by commas. It is useful 
 * for visually inspecting the contents of the dataset before or after 
 * statistical operations.
 * 
 * @param test Pointer to the array of unsigned char values
 * @param counter The total number of elements in the array
 *
 * @return void
 */
 
 unsigned char find_min(unsigned char test[],unsigned int counter);
 /**
 * @brief Finds the minimum value in the dataset
 *
 * This function iterates through the given array and determines the smallest 
 * element by comparing each item with the current minimum. It returns the 
 * minimum value found in the dataset.
 * 
 * @param test Pointer to the array of unsigned char values
 * @param counter The total number of elements in the array
 *
 * @return The smallest value (minimum) in the array
 */
 
 unsigned char find_max(unsigned char test[],unsigned int counter);
 
 /**
 * @brief Finds the maximum value in the dataset
 *
 * This function scans through the given array of unsigned char values
 * and identifies the largest element by comparing each entry with the 
 * current maximum. It returns the highest value found in the array.
 * 
 * @param test Pointer to the array containing dataset values
 * @param counter The number of elements in the array
 *
 * @return The largest value (maximum) in the array
 */
 
  int find_mean(unsigned char test[],unsigned int counter);
  
  /**
 * @brief Calculates the mean (average) value of the dataset
 *
 * This function computes the mean by summing all the elements 
 * in the given array and dividing the total by the number of elements. 
 * Since the result is returned as an integer, any fractional part will be truncated.
 * 
 * @param test Pointer to the array of unsigned char values
 * @param counter The total number of elements in the array
 *
 * @return The average value of the dataset as an integer
 */
 
 unsigned char find_median(unsigned char test[],unsigned int counter);
 
 /**
 * @brief Returns the median value of the array
 *
 * Sorts the array in ascending order and returns the middle value. 
 * For even sizes, returns the average of the two central values.
 *
 * @param test Pointer to the array
 * @param counter Number of elements in the array
 *
 * @return Median value
 */
void sort_array(unsigned char test[],unsigned int counter);

/**
 * @brief Sorts and prints the dataset
 *
 * Sorts the array in ascending order using bubble sort. Then prints 
 * the sorted values in a 2D table format with 5 rows.
 *
 * @param test Pointer to the array
 * @param counter Number of elements in the array
 *
 * @return void
 
 */
#endif /* __STATS_H__ */
 
 
