#include <stdio.h>

#define FILENAME "sample.txt"

int main()
{
    char ch = 'A';
    int i = 123;
    float f = 8.88;
    double d = 3.14159265358979323;

    FILE *fp;

    fp = fopen(FILENAME, "w");

    fprintf(fp, "%c %d %f %lf", ch, i, f, d);

    fclose(fp);

    return 0;
}