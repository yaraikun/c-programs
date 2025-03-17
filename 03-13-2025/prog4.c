#include <stdio.h>

#define FILENAME "hello.bin"

int main()
{
    int data = 1;

    FILE *fp;

    fp = fopen(FILENAME, "wb"); // write to a binary file

    fwrite(&data, sizeof(int), 1, fp);

    fclose(fp);

    return 0;
}