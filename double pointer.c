#include <stdio.h>

int main() {
    int x = 10;

    int *p = &x;     // pointer to x
    int **pp = &p;   // double pointer (pointer to pointer)

    printf("Value of x = %d\n", x);
    printf("Using *p  = %d\n", *p);
    printf("Using **pp = %d\n", **pp);

    return 0;
}
