#include <stdio.h>

void ge_03()
{
    int i, j, n;

    n = 65416;

    for (i = 0; i < 10; i++) {
        printf("arr[%d] ---> | ", i);

        for (j = 0; j < 8; j++)
            printf("%x | ", n++);

        printf("\n");
    }
}

void ge_04()
{
    char str[8] = { 'C', 'O', 'M', 'P', 'U', 'T', 'E'};
    int A[5] = {5, 4, 3, 2, 1};
    double D[2][4] = { {1, 2, 3, 4}, {-4, -3, -2, -1}};

    // assuming the address of A[4] is 12ff
    // what is the value of A + 3, and what is its data type

}

int main()
{
    ge_03();

    return 0;
}