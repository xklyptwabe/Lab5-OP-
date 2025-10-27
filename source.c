#include "functions.h"
#include <stdio.h>
#include <math.h>

int main() {
    double a = -3;
    double b = -2;
    double h;

    printf("Enter step: ");
    scanf_s("%lf", &h);

    if (h <= 0) {
        printf("Step must be > 0\n");
        return 1;
    }

    tab(a, b, h);

    return 0;
}
