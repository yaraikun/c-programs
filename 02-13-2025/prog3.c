#include <stdio.h>
#include <string.h>

typedef char Str5[6]; // holds 5 characters excluding null byte

int main()
{
    Str5 M[3][4];  // M is a 2D array of strings (5 characters at most
                    // excluding the null byte)
                    //
                    // without using a typedef:
                    //     char M[3][4][11];

    strcpy(M[0][0], "DOG");
    strcpy(M[2][3], "ZEBRA");

    M[2][3][3] = 0;

    printf("M[0][0] is %s\n", M[0][0]);
    printf("M[2][3] is %s\n", M[2][3]);

    printf("%c\n", M[2][3][2]);

    return 0;
}