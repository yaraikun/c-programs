#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int arr[] = {120, -1, 304, 23, 139};
    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(int), compare); // sort the array using qsort

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}