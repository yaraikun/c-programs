// text file read
#include <stdio.h>

int main()
{
    int x;
    FILE *fp;

    fp = fopen("hello.txt", "r"); // "r" is for read text file mode

    fscanf(fp, "%d", &x); // read an value from the text file
                          // stored that value as an int into var x

    printf("x is %d\n", x);

    fclose(fp);

    return 0;
}