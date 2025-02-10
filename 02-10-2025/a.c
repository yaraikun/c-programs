#include <stdio.h>

typedef union {
    int myInt;
    double myDouble;
} myUnion;

int main()
{
    myUnion a;
    myUnion *ptr = &a;

    ptr->myDouble = 1.1;
    ptr->myInt = 10;

    printf("%d\n", ptr->myInt);
    printf("%lf\n", ptr->myDouble);
}