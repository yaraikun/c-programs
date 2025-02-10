#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];   // string variable
    int i;
    int len;

    printf("Input a string value: ");
    scanf("%s", str);

    printf("The length of [%s] is %lld\n", str, strlen(str));

    len = strlen(str);
    for (i = 0; i < len; i++)
        printf("str[%d] is %c\n", i, str[i]);

    return 0;
}