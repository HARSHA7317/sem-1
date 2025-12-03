// write a cprogram to find area of squre?
#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the length of the square's side: ");
    scanf("%f", &side);

    area = side * side;

    printf("Area of the square: %.2f\n", area);

    return 0;
}

