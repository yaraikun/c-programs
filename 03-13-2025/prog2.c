#include <stdio.h>

int main()
{
    // printf("Value of EOF is %d.\n", EOF);
    // -1

    int data = 143;

    FILE *fp;

    fp = fopen("hello.txt", "w");

    fprintf(fp, "%d", data);

    fclose(fp);

    return 0;
}