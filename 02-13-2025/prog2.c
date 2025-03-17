#include <stdio.h>
#include <string.h>

#define STRSIZE (10) // adding parentheses is safer

// typedef allows to create/introduce an "alias"
// string is the alias for char[] data type with 10 elements
typedef char string[STRSIZE];

int main()
{
    char S[10] = "Hello";                                  // without using an alias
    string T = "Goodbye";                                  // T is a single string
    string A[5] = {"DOG", "CAT", "SNAKE", "RAT", "EAGLE"}; // 1D array of strings

    printf("S is %s\n", S);
    printf("T is %s\n", T);

    for (int i = 0; i < 5; i++)
        printf("A[%d] is %s\n", i, A[i]);

    return 0;
}