#include <stdio.h>
#include <string.h>

typedef char Str10[11];
typedef char Str30[31];

void SelectionSortNames(Str10 LAST[], Str10 FIRST[], int n)
{
    int i, j, min;
    Str10 temp;

    Str30 name1; // composed of a concatenation of lastname and firstname
    Str30 name2;

    for (i = 0; i < n - 1; i++) {
        min = i;

        // determine the actual minimum
        for (j = i + 1; j < n; j++){
            strcpy(name1, LAST[min]);  // copy last name to name1
            strcat(name1, FIRST[min]); // append first name

            strcpy(name2, LAST[j]);  // copy last name to name1
            strcat(name2, FIRST[j]); // append first name

            if (strcmp(name1, name2) > 0)
                min = j;
        }

        // swap
        if (i != min) {
            // swap last names
            strcpy(temp, LAST[i]);
            strcpy(LAST[i], LAST[min]);
            strcpy(LAST[min], temp);
            // swap first names
            strcpy(temp, FIRST[i]);
            strcpy(FIRST[i], FIRST[min]);
            strcpy(FIRST[min], temp);
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
            found = 1;      // eureka ! key found
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

void PrintNames(Str10 LAST[], Str10 FIRST[], int n)
{
    int i;

    for (i = 0; i < n; i++) 
        printf("%d: %s, %s\n", i, LAST[i], FIRST[i]);
}

int main()
{
    Str10 LAST[10];  // array of last names
    Str10 FIRST[10]; // array of first names

    int i;
    Str10 lastname;
    Str10 firstname;

    // input data

    for (i = 0; i < 10; i++) {
        scanf("%s %s", lastname, firstname);
        strcpy(LAST[i], lastname);
        strcpy(FIRST[i], firstname);
    }

    printf("The original (unsorted) list:\n");
    PrintNames(LAST, FIRST, 10);
    printf("\n");

    SelectionSortNames(LAST, FIRST, 10);

    printf("The sorted list:\n");
    PrintNames(LAST, FIRST, 10);
    printf("\n");

    return 0;
}