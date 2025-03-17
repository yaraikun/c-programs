#include <stdio.h>

#define MAX 5

int BinarySearch(int key, int A[], int n)
{
    int low, high, mid, found;
    low = 0;
    high = n - 1;
    found = 0;

    while (!found && low <= high)
    {
        mid = low + (high - low) / 2;

        if (key == A[mid])
            found = 1;
        else if (key < A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (found)
        return mid;
    else
        return -1;
}

int *Search(int key, int A[], int n)
{
    for (int i = 0; i < n; i++)
        if (A[i] == key)
            return &A[i];
    return 0;
}

void ge()
{
    int A[MAX] = {99, 10, 2, 3, 4};
    int n = MAX;

    int* ptr;
    ptr = Search(99, A, n);

    printf("%p", ptr);
}

void strings()
{
    // char str[] = {'b', 'r', 'o', '\0'};
    char str[4] = {'b', 'r', 'o'};

    printf("%s", str);
    printf("%c", str[3]);
}

int main()
{
    strings();
    return 0;
}