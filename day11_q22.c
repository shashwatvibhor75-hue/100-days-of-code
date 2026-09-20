#include <stdio.h>

int main() {
    float cp, sp, amount, percentage;

    printf("Enter Cost Price (CP): ");
    scanf("%f", &cp);
    printf("Enter Selling Price (SP): ");
    scanf("%f", &sp);

    if (sp > cp) {
        amount = sp - cp;
        percentage = (amount / cp) * 100;
        printf("Status: Profit\n");
        printf("Profit Amount = %.2f\n", amount);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } 
    else if (cp > sp) {
        amount = cp - sp;
        percentage = (amount / cp) * 100;
        printf("Status: Loss\n");
        printf("Loss Amount = %.2f\n", amount);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } 
    else {
        printf("Status: No Profit, No Loss.\n");
    }

    return 0;
}