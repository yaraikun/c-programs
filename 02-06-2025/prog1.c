#include <stdio.h>

int main()
{
    // char animal[4] = {'D', 'O', 'G', '\0'};
    char animal[4] = {'D', 'O', 'G'};
    char animal_two[8] = "MOUSE";   // string constant
    char animal_three[5];

    animal_three[0] = 'C';
    animal_three[1] = 'A';
    animal_three[2] = 'T';
    animal_three[3] = '\0';         // DON'T forget to store a null byte 

    printf("%s", animal);           // %s is string format
    printf("%s", animal_two);
    printf("%s", animal_three);

    return 0;
}