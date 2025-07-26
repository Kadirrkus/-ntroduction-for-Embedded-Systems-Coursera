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
 * @file <stats.c> 
 * @brief < The implementation file of the c1m1 assignment >
 *
 * <A This file includes all the required functions implementations in the c1m1 assignment>
 *
 * @author <Abdulkadir Kus>
 * @date <20.07.2025 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main(void) {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
                                
                                
      /* Other Variable Declarations Go Here */
                            
   unsigned char min=0;
   unsigned char max=0;
  int mean=0;
   unsigned  median=0;
   
    /* Statistics and Printing Functions Go Here */
     print_array(test,SIZE)  ;
     
   
    
    min=find_min(test,SIZE);
    max=find_max(test,SIZE);
    mean=find_mean(test,SIZE);
    median=find_median(test,SIZE);
    print_statistics(min,max,mean,median);
    sort_array(test,SIZE);  
}



void print_statistics(unsigned char min,unsigned char max,int mean,unsigned char median){
	
	printf("minimum=%u\n",min);
	printf("maximum=%u\n",max);
	printf("mean=%d\n",mean);
	printf("median=%u\n",median);
	
}



void print_array(unsigned char test[],unsigned int counter){
	
	for(int i=0;i<counter;i++){
		printf("%u,",test[i]);
		
	}
	printf("\n"); //Before sorting 
	
}

unsigned char find_min(unsigned char test[],unsigned int counter){
   unsigned char min=test[0];
	for(int i=0;i<counter;i++){
		
	 if(test[i]<min){
	 	
	 	min=test[i];
	 
	 }
	 	
	}	
	//printf("Test min= %u\n",min);
	
	return min;
}
