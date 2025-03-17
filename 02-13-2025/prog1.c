#include <stdio.h>
#include <string.h>

#define STRSIZE (10)    // adding parentheses is safer

// typedef allows to create/introduce an "alias"
// string is the alias for char[] data type with 10 elements
typedef char string[STRSIZE];

int main()
{
    char S[10];     // without using an alias
    string T;       // T is a single string
    string A[5];    // 1D array of strings
                    // It's the same as char A[5][10];

    /*
     * Q1: What is the size of S in bytes?
     * A1: sizeof(char) * 10 = 10 bytes.
     * Q2: What is the size of T in bytes?
     * A1: 10 bytes.
     */

    strcpy(S, "Hello");
    strcpy(T, "Goodbye");
    strcpy(A[0], "DOG");
    strcpy(A[1], "CAT");
    strcpy(A[2], "SNAKE");
    strcpy(A[3], "RAT");
    strcpy(A[4], "EAGLE");

    printf("S is %s\n", S);
    printf("T is %s\n", T);

    for (int i = 0; i < 5; i++)
        printf("A[%d] is %s\n", i, A[i]);

    return 0;
}