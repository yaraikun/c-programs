#include <stdio.h>

#define FILENAME "sample.bin"

int main()
{
    char ch = 'A';
    int i = 123;
    float f = 8.88;
    double d = 3.14159265358979323;

    FILE *fp;

    fp = fopen(FILENAME, "wb"); // write to a binary file

    // total file size = 17 bytes

    fwrite(&ch, sizeof(char), 1, fp);  // 1 byte
    fwrite(&i, sizeof(int), 1, fp);    // 4 bytes
    fwrite(&f, sizeof(float), 1, fp);  // 4 bytes
    fwrite(&d, sizeof(double), 1, fp); // 8 bytes

    fclose(fp);

    return 0;
}