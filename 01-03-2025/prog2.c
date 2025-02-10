#include <stdio.h>

#define SIZE 8

int BinarySearch(int key, int* arr, int n)
{
    int low = 0;
    int high = n - 1;
    int mid;
    int found = 0;

    while (!found && low <= high) {
        // mid = (low + high) / 2;
        mid = low + (high - low) / 2;

        if (key == arr[mid])
            found = 1;
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (found)
        return mid;
    else
        return -1;
}

int main()
{
    // PRE-CONDITION: data must be sorted in ascending / increasing order
    // int A[SIZE] = {10, 23, 11, 63, -55, 99 -20, 88};
    int A[SIZE] = {-55, -20, 10, 11, 23, 63, 88, 99};

    int search_key;
    int index;

    printf("Input Search Key: ");
    scanf("%d", &search_key);

    index = BinarySearch(search_key, A, SIZE);

    if (index != -1)
        printf("Search key was found at array index %d.\n", index);
    else
        printf("Search key was not found.\n");

    return 0;
}