#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c, d, r1, r2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Category: Real and Distinct\n");
        printf("Roots are: %.2f and %.2f\n", r1, r2);
    } 
    else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Category: Real and Equal\n");
        printf("Root is: %.2f\n", r1);
    } 
    else {
        printf("Category: Imaginary / Complex\n");
        printf("The equation has no real roots.\n");
    }

    return 0;
}