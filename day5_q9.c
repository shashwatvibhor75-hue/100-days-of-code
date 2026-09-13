#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float si, amount, ci;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (%%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100.0;

        amount = principal * pow((1.0 + (rate / 100.0)), time);
    ci = amount - principal;
    printf("\n--- Results ---\n");
    printf("Simple Interest   = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}