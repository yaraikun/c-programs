#include <stdio.h>
#include <string.h>

typedef char String[11];

int main()
{
    String alpha = "AT@DOLLAR$";
    String beta = {'A', 'B', 'C', '\0', 'E', 'F', 'G'};
    String kappa;
    char gamma[21];

    int d = strlen( strcpy(gamma, "Hello, world!"));
    printf("%d\n", d);

}