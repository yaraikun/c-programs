// text file read
#include <stdio.h>

int main()
{
    int x;
    FILE *fp;

    // Q: How do we know if a file exists or not?
    // A: Check the return value of fopen().
    //    Remember that fopen() returns a memory address of type FILE *.
    //    There are two possible results:
    //      Possibility #1: it returns NULL -- which is macro definition is
    //                      (void *)0
    //                      this means the file does NOT exist
    //      Possibility #2: it returns a value not NULL (not 0)
    //                      this means the file exists

    fp = fopen("hello.txt", "r"); // "r" is for read text file mode
    printf("fp is %p\n", fp);

    if (fp != NULL) {
        fscanf(fp, "%d", &x); // read an value from the text file
                              // stored that value as an int into var x

        printf("x is %d\n", x);

        fclose(fp);
    } else {
        // printf("ERROR: %s does not exist.", "hello.txt");
        fprintf(stderr, "### ERROR: %s does not exist.", "hello.txt");
        // stderr is a pre-defined name meaning "standard error device"
        // and it is mapped onto the display screen
    }

    return 0;
}