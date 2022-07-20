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
 * @file  ASSIGNMENT 1
 * @brief Statistical analyses
 *
 * Analyse an array of unsigned char data items and report analytics on the 
 * maximum, minimum, mean, and median of the data set. The data set is ordered 
 * from large to small. All statistics should be rounded down to the nearest integer. 
 * The data should be printed to the screen in nicely formatted presentation.
 *
 * @author Akhila K
 * @date 17 july 2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param median 	Median value
 * @param mean 	 	Mean value	
 * @param maximum 	Maximum value	
 * @param minimum 	Minimum value	
 *
 * @return void
 */


 void print_statistics();
 void print_statistics(int median, int mean, int maximum, int minimum);

/**
 *@brief Prints array to screen.
 *@param data 	Char data array
 *@param len 	Array length	
 *
 * @return void
*/
void print_array(unsigned char *data, int len);

 /**
 * @brief Calculate array data median value.
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return The data median value
 */  

int find_median(unsigned char *data, int len);


/**
 * @brief Calculate array data mean value.
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return The data mean value
 */
int find_mean(unsigned char *data, int len);


/**
 * @brief Calculate array data maximum value.
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return The data maximum value
 */
int find_maximum(unsigned char *data, int len); 


/**
 * @brief Calculate array data minimum value.
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return The data minimum value
 */
int find_minimum(unsigned char *data, int len);


/**
 * @brief Calculate array data mean value.

 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return void
 */
void sort_array(unsigned char *data, int len);




#endif /* __STATS_H__ */
