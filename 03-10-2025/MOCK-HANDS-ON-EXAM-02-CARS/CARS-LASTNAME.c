/* 
    This is the skeleton file that you need to use as base code for the CARS problem.
	
	Encode your Name and Section below.
	    
    LASTNAME, FIRSTNAME: _____________________
    SECTION: _________
	
	DO NOT define a main() function in this file.  The main() function definition 
	is provided in the accompanying file main.c.

    MAKE SURE THAT the solution/program you are submitting does not have:
       * a compilation error
	   * a compilation warning
	   * a logical error
	
	If there is a compilation error, the score will be 0 point.	   
*/


#include "cars.h"   // READ and UNDERSTAND the contents of this header file.  DO NOT change this line.


/*
    TO DO TASK #1: [for 10 points]
	
	Define Print_Cars_List() function which will printf() the values of all data in the list of 
	car structures from the first index to the last index in sequence. 	
	
	REQUIRED OUTPUT FORMAT: You should printf() the members of the same structure 
	                        on  the same line separated by at least one white space.  
	
	RESTRICTION: Do NOT print any extraneous or unnecessary string.	                        
*/
void
Print_Cars_List(struct carTag CARS[], int nBrands)
{
	// Encode your solution.
}


/*
    TO DO TASK #2: [for 10 POINTS]
	
	Define Append_Cars_List() function that will append new data in the list of car structures.
	Append means to add new elements (car data) at the end of the list.  The function should return
	the updated number of brans stored in the list.
	
	ASSUMPTIONS:
	  1.  There is available memory space in CARS[] to accomodate new data.
	  2.  The brand is different from those that are already stored in CARS[], (i.e., all brands are unique).
	
	RESTRICTION: You should NOT call printf() or scanf() inside this function.
	 
*/
int 
Append_Cars_List(struct carTag CARS[], String brand, int QR, int CSR, int nBrands)
{
	// Encode your solution.
	
    // Do NOT forget the return statement!
}



/*
    TO DO TASK #3: [for 10 points]
	
	Define Selection_Sort() that will sort the list of structures by brand name in alphabetical order.
	
	RESTRICTION: 
	1. You are required to use straight selection sort algorithm.
	2. You should NOT call printf() or scanf() inside this function.
	 
*/
void
Selection_Sort(struct carTag CARS[], int nBrands)
{
	// Encode your solution.
	
	// NOTE: you may define a separate function for swapping two structures

}


/*
    TO DO TASK #4: [for 10 POINTS]
	
	Define Binary_Search() to answer the question:
	      
		Q: Is there a <param_brand> in the list?  
	  
	The function should perform a BINARY SEARCH to determine if param_brand
	is in the list of structures or not.  If it is found, it should return
	the index corresponding to where it was found; otherwise, it should return -1.

	For this task, assume that the CARS[] array is already sorted by brand name.
    
	RESTRICTION: You should NOT call printf() or scanf() inside this function.	 
*/
int
Binary_Search(struct carTag CARS[], String param_brand, int nBrands)
{
	// Encode your solution.
	
	// Do NOT call Selection_Sort() here.  Assume that the CARS[] array is already sorted alphabetically by brand name.
		
    // Do NOT forget the return statement!	
}


/*
    TO DO TASK #5: [for 10 points]
	
	Define Build_List() that will compute the answer to the following question:
    
        Q: Which brands have better Customer Satisfaction Rating compared with <param_brand>?
    
	The function should build a list of cars where all structure data have a higher CSR value
	compared with that of param_brand.  
	
	Your solution must call the Binary_Search() function that you wrote for Task #4
	to get the array index of param_brand.
	
    The function should return the number of cars stored in the list.
    
    RESTRICTION: You should NOT call printf() or scanf() inside this function.	 
*/
int
Build_List(struct carTag CARS[], String param_brand, int nBrands, struct carTag newList[])
{
	// Encode your solution.
	
	// REQUIREMENT: You must call first Binary_Search() to search for param_brand.

	
	// Do NOT forget the return statement!		
}



/*******************************************************************************
    WARNING!!!   WARNING!!!   WARNING!!!    
	
	YOU ARE NOT ALLOWED TO DEFINE the main() function in this file.  

    The main() is in the accompanying main.c source file.
    
	VIOLATION OF THIS RESTRICTION WILL RESULT TO A DEDUCTION OF 10 points!		 
********************************************************************************/




