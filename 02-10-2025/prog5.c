#include <stdio.h>
#include <string.h>

// use typedef to declare an alias for some data type

// typedef string char[10];
typedef char string[10];

int main()
{
    // INSTEAD OF DOING THIS
    // char s1[10];    // string variable with at most 10 characters
    //                 // including the null byte
    // char s2[10];
    // char s3[10];
    // char s4[10];
    // char s5[10];

    // YOU CAN DO THIS
    // string s1 = "First";
    // string s2 = "Second";
    // string s3 = "Third";
    // string s4 = "Fourth";
    // string s5 = "Fifth";
    
    // BUT THAT'S ASS SO DO THIS
    // string S[5];
    // strcpy(S[0], "The");
    // strcpy(S[1], "Quick");
    // strcpy(S[2], "Brown");
    // strcpy(S[3], "Fox");
    // strcpy(S[4], "Jumps");

    // WHICH IS STILL ASS SO JUST DO THIS
    string S[5] = {"The", "Quick", "Brown", "Fox", "Jumps"};

    int i;
    for (i = 0; i < 5; i++)
    printf("[%s] length is %lld\n", S[i], strlen(S[i]));


    // printf("%s\n", s1);
    // printf("%s\n", s2);
    // printf("%s\n", s3);
    // printf("%s\n", s4);
    // printf("%s\n", s5);


    return 0;
}