// text file read
#include <stdio.h>

int main()
{
    int x;
    FILE *fp;

    char input_filename[25];
    printf("Input the file name: ");
    scanf("%s", input_filename); // no &

    fp = fopen(input_filename, "r"); // "r" is for read text file mode
    printf("fp is %p\n", fp);

    if (fp != NULL) {
        fscanf(fp, "%d", &x); // read an value from the text file
                              // stored that value as an int into var x

        printf("x is %d\n", x);

        fclose(fp);
    } else {
        // printf("ERROR: %s does not exist.", "hello.txt");
        fprintf(stderr, "### ERROR: %s does not exist.", input_filename);
        // stderr is a pre-defined name meaning "standard error device"
        // and it is mapped onto the display screen
    }

    return 0;
}