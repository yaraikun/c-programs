#include <stdio.h>

#define SIZE 8

int LinearSearch(int key, int* arr, int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (key == arr[i])
            return i;

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

    index = LinearSearch(search_key, A, SIZE);

    if (index != -1)
        printf("Search key was found at array index %d.\n", index);
    else
        printf("Search key was not found.\n");

    return 0;
}