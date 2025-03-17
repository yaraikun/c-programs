// text file read
#include <stdio.h>

#define MAX (100)

int main()
{
    FILE *fp;
    char input_filename[25];
    int A[MAX];
    int x;
    int ctr;
    int i;

    printf("Input the file name: ");
    fscanf(stdin, "%s", input_filename);

    if ( (fp = fopen(input_filename, "r")) != NULL ) {
        ctr = 0;
        while ( fscanf(fp, "%d", &x) == 1 ) { // true: data was read
            A[ctr++] = x;
        }

        fclose(fp);

        for (i = 0; i < ctr; i++) {
            fprintf(stdout, "A[%d] is %d\n", i, A[i]);
        }

    } else {
        fprintf(stderr, "$$$ ERROR: %s does not exist.", input_filename);
    }

    return 0;
}