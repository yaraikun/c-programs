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

void PrintStudent_ver1(studentType s) // sizeof(s) is 40 bytes
{
    // printf("%d\n", (int)sizeof(s));
    printf("$$$ %d %-15s %-15s %.2f\n",
            s.id_number, s.first_name, s.last_name, s.grade);
}

void PrintStudent_ver2(studentType *ptr) // sizeof(ptr) is 8 bytes
{
    // printf("sizeof(ptr) is %d\n", (int)sizeof(ptr));

    // printf("$$$ %d %-15s %-15s %.2f\n",
    //         s.id_number, s.first_name, s.last_name, s.grade);

    // ptr is a pointer to the struct
    // *ptr is the actual struct

    // printf("$$$ %d %-15s %-15s %.2f\n",
    //         *ptr.id_number, *ptr.first_name, *ptr.last_name, *ptr.grade;

    // order of precedence . goes before *

    printf("$$$$$ %d %-15s %-15s %.2f\n",
          (*ptr).id_number, (*ptr).first_name, (*ptr).last_name, (*ptr).grade);

    // (*ptr).member == ptr->member
    // ptr->member means that we access the member INDIRECTLY via the ptr

    printf("+++++ %d %-15s %-15s %.2f\n",
            ptr->id_number, ptr->first_name, ptr->last_name, ptr->grade);
}

void PrintStudentData(studentType S[])
{
    int i;

    // print the student data
    for (i = 0; i < 12; i++) {
        // PrintStudent_ver1(S[i]); // S[i] is the i'th student data (row i)
        PrintStudent_ver2(S + i); // memory address of S[i] &S[i] == S + i
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