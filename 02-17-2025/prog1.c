#include <stdio.h>
#include <string.h>

typedef char Str10[11];

// binary search on a sorted 1D array of strings

int BinarySearch(Str10 key, Str10 A[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid;
    int found = 0; // assume not found

    while (!found && low <= high) {
        mid = low + (high - low) / 2;

        if (strcmp(key, A[mid]) == 0)
            found = 1; // eureka ! key found
        else if (strcmp(key, A[mid]) < 0)
            high = mid - 1; // search the lower / left half
        else                // (strcmp(key, A[mid] > 0))
            low = mid + 1;
    }

    if (found)
        return mid;
    else
        return -1;
}

int main()
{
    //                 01     02        03       04          05
    Str10 LIST[10] = {"ANG", "CO",     "DIAZ",  "ESPIRITU", "GOMEZ",
                      "LEE", "MURASE", "OKADA", "SANTOS",   "ZORRO"};
    //                 06     07        08       09          10
    
    Str10 key;
    int index;

    printf("Input search key: ");
    scanf("%s", key);

    index = BinarySearch(key, LIST, 10);

    if (index != -1)
        printf("Key %s was matched %s at index %d\n", key, LIST[index], index);
    else
        printf("Key was not found.\n");

    return 0;
}