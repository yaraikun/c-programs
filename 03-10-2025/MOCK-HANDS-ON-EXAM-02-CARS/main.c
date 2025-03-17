/* 
    This file contains the main() function for the CARS problem.
	
	It is this file that you should compile and run.		
*/

/* DO NOT CHANGE THE #include below.  You are NOT allowed to include other files. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
   TO DO:  change the #include below to the file with your own lastname.  For example if your lastname
   is SHAZAM, then it should be changed to #include "CARS-SHAZAM.c".
   
*/
#include "CARS-CALUPIG.c"

/*
    Do NOT change this function. 
*/
int
Load_Data(struct carTag CARS[])
{
	int ctr = 0;
	struct carTag car;
		
	while (scanf("%s %d %d", car.brand, &car.QR, &car.CSR) == 3) {
		CARS[ctr] = car;
		ctr++; 
	}		
	return ctr;
}

/*
   You are given this main() to help you test your five function definitions.
   
   Understand the sample function calls.  They serve as your guide to properly 
   implementing your solution.

   Take note that the teacher-in-charge of checking your solution will not necessarily
   use this main.c.  
   
   A different main.c with a different main() and another set of student data values
   will be used for black box testing.
*/
int
main()
{
	struct carTag CARS[MAXNUM_BRANDS];  // this is the array of structures
    int nBrands; // number of car structures (brands stored in list of CARS)
	
	struct carTag NewList[MAXNUM_BRANDS];   // this will hold the answer to the query in Task #5
	int nElements; // actual number of elements (structures) stored in the newList array
		
		
	/* Load_Data() initializes the contents of CARS[] array. */
	nBrands = Load_Data(CARS);   

    
	/* Test solution for TASK #1 */
	printf("**TEST-01:Print_Cars_List()**\n");
    Print_Cars_List(CARS, nBrands);
    printf("nBrands = %d\n", nBrands);    
    printf("\n\n");


    /* Test solution for TASK #2 */	
    printf("**TEST-02:Append_Cars_List()**\n");  
	nBrands = Append_Cars_List(CARS, "MITSUBISHI", 146, 767, nBrands);
	nBrands = Append_Cars_List(CARS, "VOLVO", 109, 795, nBrands);
	nBrands = Append_Cars_List(CARS, "ACURA", 86, 822, nBrands);
	
	Print_Cars_List(CARS, nBrands);
    printf("nBrands = %d\n", nBrands);    
    printf("\n\n");
    

	/* Test solution for TASK #3 */	
	printf("**TEST-03:Selection_Sort()**\n");    
	Selection_Sort(CARS, nBrands);
	
	Print_Cars_List(CARS, nBrands);
    printf("\n\n");


	/* Test solution for TASK #4 */
	printf("**TEST-04:Binary_Search()**\n");
	printf("%d\n", Binary_Search(CARS, "HONDA", nBrands));
	printf("%d\n", Binary_Search(CARS, "ACURA", nBrands));
	printf("%d\n", Binary_Search(CARS, "VOLVO", nBrands));
	printf("%d\n", Binary_Search(CARS, "ITLOG", nBrands));
	printf("\n\n");
  

	/* Test solution for TASK #5 */
	printf("**TEST-05:Build_List()**\n"); 
	nElements = Build_List(CARS, "MINI-COOPER", nBrands, NewList);
	
	Print_Cars_List(NewList, nElements);
    printf("nElements = %d\n", nElements);       
	
   	return 0;
}

