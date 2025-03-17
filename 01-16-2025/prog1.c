#include <stdio.h>

int main()
{
    int A[5]; // Declaration

    // Initialize
    A[0] = 10;
    A[1] = 20;
    A[2] = 30;
    A[3] = 40;
    A[4] = 50;

    printf("%d\n", A[0]);
    printf("%d\n", A[-1]); // Error!

    return 0;
}