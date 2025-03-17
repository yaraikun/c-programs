/*
  Read the data STUDENTS.TXT file via input redirection.
  Store the student data into 4 arrays, one for each column of data.
*/

#include <stdio.h>
#include <string.h>

#include "students.h"

int main()
{
    int ID[MAX_STUDENTS];
    Str15 FIRSTNAME[MAX_STUDENTS];
    Str15 LASTNAME[MAX_STUDENTS];
    float GRADE[MAX_STUDENTS];
      
    int id_number;
    Str15 first_name;
    Str15 last_name;
    float grade;
    int i;
  
    // input the student data
    for (i = 0; i < 12; i++) {
       // never PUT a \n in scanf()!!!!
       scanf("%d %s %s %f", &id_number, first_name, last_name, &grade);
       
       // copy the input data into the 4 correspond array data structures
       ID[i] = id_number;
       strcpy(FIRSTNAME[i], first_name);
       strcpy(LASTNAME[i], last_name);
       GRADE[i] = grade;
    }

    // print the student data
    for (i = 0; i < 12; i++) {
        printf("%d %-15s %-15s %.2f\n", ID[i], FIRSTNAME[i], LASTNAME[i], GRADE[i] );
    }

    return 0;
}