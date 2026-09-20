#include <stdio.h>

int main() {
    float units, bill = 0;

    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    if (units < 0) {
        printf("Invalid input! Units cannot be negative.\n");
    } 
    else if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } 
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } 
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    if (units >= 0) {
        printf("Total Electricity Bill: ₹%.2f\n", bill);
    }

    return 0;
}