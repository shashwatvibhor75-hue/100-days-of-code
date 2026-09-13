#include <stdio.h>
#define PI 3.14159265

int main() {
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;

    printf("\n--- Results ---\n");
    printf("Area = %.4f\n", area);
    printf("Circumference = %.4f\n", circumference);

    return 0;
}