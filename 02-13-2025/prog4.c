// Linear search on a 1D array of stirngs

#include <stdio.h>
#include <string.h>

typedef char str10[11];

int int_linear_search(int key, int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;

    return -1;
}

/*
 * Purpose: Searches for the key in a string.
 * Return: The index of the character that we are searching for.
 */
int str_linear_search(char key[], char str[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        // if (str[i] == key)   // Will not work with strings
        if (strcmp(str[i], key) == 0)
            return i;

    return -1;
}

int main()
{
    str10 LIST[10] = {"DOG", "CAT", "BAT", "ROOSTER", "ZEBRA",
                      "MOUSE", "SNAKE", "EAGLE", "TIGER", "LION"};

    str10 key;

    printf("Input search key: ");
    scanf("%s", key);

    int index = str_linear_search(key, LIST, 10);

    if (index != -1)
        printf("%s was found at index %d!\n", key, index);
    else
        printf("%s not found!\n", key);
    return 0;
}