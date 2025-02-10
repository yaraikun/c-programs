#include <stdio.h>
#include <string.h>

// Always make sure to make enough space for the null byte
#define MAX_LEN 3

int main()
{
    char source[MAX_LEN] = "abc";
    char dest[MAX_LEN];

    // dest = source;
    // OBJECTIVE: copy the source string to dest string
    // REMEMBER: array to array assignment is NOT allowed in C
    // error: assignment to expression with array type

    strcpy(dest, source);

    printf("source is [%s]\n", source);
    printf("dest is [%s]\n", dest);

    return 0;
}