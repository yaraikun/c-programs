/*
    Read the data STUDENTS.TXT file via input redirection.
    Store the student data into one array of "student structures."

    struct is a keyword in C 
    it allows to introduce a user-defined "structure data type"
    struct is a group of elements -- that may be of different data types
    for ex. with respect to the contents of STUDENTS.txt
    each row represents ONE student structure. the members are:
    ID#, first name, last name, and grade
*/

#include <stdio.h>
#include <string.h>

#include "students.h"

void InputStudentData(struct studentTag S[])
{
    int i;
    int id_number;
    Str15 first_name;
    Str15 last_name;
    float grade;

    // input the student data
    for (i = 0; i < 12; i++) {
        // never put a \n in scanf
        scanf("%d %s %s %f", &id_number, first_name, last_name, &grade);

        // copy the input data into the 4 corresponding array data structures
        S[i].id_number = id_number;
        strcpy(S[i].first_name, first_name);
        strcpy(S[i].last_name, last_name);
        S[i].grade = grade;
    }
}

void PrintStudentData(struct studentTag S[])
{
    int i;

    // print the student data
    for (i = 0; i < 12; i++) {
        printf("%d %-15s %-15s %.2f\n",
               S[i].id_number,
               S[i].first_name,
               S[i].last_name,
               S[i].grade);
        // TO ACCESS a member of a structure, we'll use the . (dot) operator
        // notation . (dot) operator is "member access" operator
        // syntax: structurename.membername i.e. parentname.childname
        //         the structure is the parent, the member is a child
    }
}

int main()
{
    struct studentTag STUDENTS[MAX_STUDENTS]; // Chapter 1 combined with
                                              // Chapter 3

    InputStudentData(STUDENTS); // student structures
    PrintStudentData(STUDENTS); // student structures

    return 0;
}