#include <stdio.h>

void sort(int* arr, int len)
{
    int i, j, key;

    for (i = 1; i < len; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int i, len;

    int arr[] = {10, 234, -12, 56, 10};
    len = sizeof(arr) / sizeof(arr[0]);

    sort(arr, len);

    for (i = 0; i < len; i++)
        printf("arr[%d]: %d\n", i, arr[i]);

    return 0;
}