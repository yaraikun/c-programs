#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = {'A', 'N', 'T'};    // null bytes will be added
                                        // automatically
    char str2[25] = "The quick brown fox";

    printf("%lld\n", strlen(str1));     // length is 3
    printf("%lld\n", strlen(str2));     // length is 19

    str2[4] = 0;
    // the string becomes 'T', 'h', 'e', ' ', '\0', 'u', 'i', ...
    printf("### %lld\n", strlen(str2));
    printf("### %s\n", str2);

    // for (int i = 0; i < 25; i++)
    //     printf("%c", str2[i]);
    // printf("\n");

    printf("%lld\n", strlen("Hello, World!"));  // length is 13
    printf("%d\n", (int)strlen("DLSU"));        // type cast to int, length is 4
    printf("%lld\n", strlen("X"));              // length is 1
    printf("%d\n", (int)strlen(" "));           // a single space, length is 1
    printf("%lld\n", strlen(""));               // empty string, length is 0

    return 0;
}