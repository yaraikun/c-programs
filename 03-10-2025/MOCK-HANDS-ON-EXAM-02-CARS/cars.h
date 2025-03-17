/*
  
  cars.h   DO NOT CHANGE THE CONTENTS OF THIS HEADER FILE.
  
  This file is included in the skeleton file CARS-LASTNAME.c
	
*/

// maximum number of brans
#define MAXNUM_BRANDS   50

typedef char String[21];


/*
   This is the structure data type for a structure variable that will store
   data about a car (i.e., its brand name, QR value and CSR value).
*/
struct carTag {  
	String brand;   
	int QR;         // Quality Rating value 
	int CSR;        // Customer Satisfaction Rating value	
};


/* 
	The following are the function prototypes for the functions that you will need to define. 
*/
void Print_Cars_List(struct carTag CARS[], int nBrands);
int Append_Cars_List(struct carTag CARS[], String brand, int QR, int CSR, int nBrands);
void Selection_Sort(struct carTag CARS[], int nBrands); 
int Binary_Search(struct carTag CARS[], String param_brand, int nBrands);
int Build_List(struct carTag CARS[], String param_brand, int nBrands, struct carTag newList[]);


