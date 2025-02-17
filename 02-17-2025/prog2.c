#include <stdio.h>
#include <string.h>

typedef char Str10[11];

void SelectionSort(Str10 A[], int n)
{
    int i, j, min;
    Str10 temp;

    for (i = 0; i < n - 1; i++) {   // n - 1 passes needed to sort n elements
        min = i;                    // assume first index is minimum

        // determine the actual minimum
        for (j = i + 1; j < n; j++)
            if (strcmp(A[min], A[j]) > 0)   // if the min actually isn't the min
                min = j;                    // then j is the min

        // swap
        if (i != min) {
            strcpy(temp, A[i]);   // temp = A[i];
            strcpy(A[i], A[min]); // A[i] = A[min];
            strcpy(A[min], temp); // A[min] = temp;
        }
    }

}

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

void PrintList(Str10 L[], int n)
{
    int i;

    for (i = 0; i < n; i++) 
        printf("%d: %s\n", i, L[i]);
}

int main()
{
    //                 01     02        03       04          05
    // Str10 LIST[10] = {"ANG", "CO",     "DIAZ",  "ESPIRITU", "GOMEZ",
    //                   "LEE", "MURASE", "OKADA", "SANTOS",   "ZORRO"};
    //                 06     07        08       09          10
    Str10 LIST[10] = {"ZORRO", "CO", "DIAZ", "LEE", "MURASE",
                      "ANG", "OKADA", "GOMEZ", "SANTOS", "ESPIRITU"};
    
    Str10 key;
    int index;

    printf("The original (unsorted) list:\n");
    PrintList(LIST, 10);
    printf("\n");

    SelectionSort(LIST, 10);

    printf("The sorted list:\n");
    PrintList(LIST, 10);
    printf("\n");

    printf("Input search key: ");
    scanf("%s", key);

    index = BinarySearch(key, LIST, 10);

    if (index != -1)
        printf("Key %s was matched %s at index %d\n", key, LIST[index], index);
    else
        printf("Key was not found.\n");

    return 0;
}