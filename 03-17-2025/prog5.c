// text file read
#include <stdio.h>

int main()
{
    FILE *fp;
    char input_filename[25];
    int A[5];

    printf("Input the file name: ");
    // scanf("%s", input_filename); // no &
    fscanf(stdin, "%s", input_filename);
    // stdin is a pre-defined name meaning "standard input device"
    // and it is mapped onto the keyboard

    if ( (fp = fopen(input_filename, "r")) != NULL ) {
        for (int i = 0; i < 5; i++) {
            fscanf(fp, "%d", &A[i]); // read an value from the text file
                                  // stored that value as an int into var x
            // printf("x is %d\n", x);
            fprintf(stdout, "A[%d] is %d\n", i, A[i]);
            // stdin is a pre-defined name meaning "standard output device"
            // and it is mapped onto the display screen
        }


        fclose(fp);
    } else {
        // printf("ERROR: %s does not exist.", "hello.txt");
        fprintf(stderr, "$$$ ERROR: %s does not exist.", input_filename);
        // stderr is a pre-defined name meaning "standard error device"
        // and it is mapped onto the display screen
    }

    return 0;
}