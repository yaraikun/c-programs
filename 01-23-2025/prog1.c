#include <stdio.h>

void PrintList(int L[], int n) // formal parameters/arguments
{
    int i;

    for (i = 0; i < 5; i++)
        printf("L[%d]: %d\n", i, L[i]);
}

int main()
{
    // int A[5]; // variable DECLARATION
    int A[5] = {10, 20, 5, 8, 33}; // variable DEFINITION

    PrintList(A, 5); // actual parameters/arguments

    return 0;
}