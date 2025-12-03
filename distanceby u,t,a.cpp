// write a cprogram to find distance using d=(u*t)+0.5(a*t*t)?
#include <stdio.h>
int main() {
    double u, t, a, s;

    printf("Enter initial velocity (u): ");
    scanf("%lf", &u);

    printf("Enter time (t): ");
    scanf("%lf", &t);

    printf("Enter acceleration (a): ");
    scanf("%lf", &a);

    s = u * t + 0.5 * a * t * t;

    printf("Distance traveled: %.2lf\n", s);

    return 0;
}

