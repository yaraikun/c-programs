/*
  Read the data STUDENTS.TXT file via input redirection.
  Store the student data into one array of "student structures".

   struct is a keyword in C
   it allows to introduce a user-defined "structure data type"
   struct is a group of elements -- that may be of different data types
   For ex. with respect to STUDENTS.TXT file contents,
   each row represents ONE student structure, the members are 
   ID#, first name, last name and grade.
*/

#include <stdio.h>
#include <string.h>

#include "students.h"

void InputStudentData(studentType S[])
{
    int id_number;
    Str15 first_name;
    Str15 last_name;
    float grade;
    int i;

    // input the student data
    for (i = 0; i < 12; i++) {
       // never PUT a \n in scanf()!!!!
       scanf("%d %s %s %f", &id_number, first_name, last_name, &grade);
       
       // copy the input data into the respective array of structure members
       S[i].id_number = id_number;
       strcpy(S[i].first_name, first_name);
       strcpy(S[i].last_name, last_name);
       S[i].grade = grade;
    }
}

void PrintStudent(studentType s)
{
    // printf("%d\n", (int)sizeof(s));
    printf("$$$ %d %-15s %-15s %.2f\n",
            s.id_number, s.first_name, s.last_name, s.grade);
}

void PrintStudentData(studentType S[])
{
    int i;

    // print the student data
    for (i = 0; i < 12; i++) {
        PrintStudent(S[i]); // S[i] is the i'th student data (row i)
    }

    // TO ACCESS a member of a structure, we'll use the . (dot) operator
    // . (dot) operator is "member access" operator
    // syntax: structurename.membername i.e., parentname.childname
    //         the structure is the parent, the member is the child
    //         ex. S[i].id_number
}

int main()
{
    studentType STUDENTS[MAX_STUDENTS];  // Chapter 1 combined with Chapter 3
    // each array element is of type studentType

    InputStudentData(STUDENTS); // STUDENTS is the name of a 1D array of                             
    PrintStudentData(STUDENTS); // student structures
 
    return 0;
}