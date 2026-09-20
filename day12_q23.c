#include <stdio.h>

int main() {
    int days, fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &days);

    if (days < 0) {
        printf("Invalid input! Days cannot be negative.\n");
    } 
    else if (days <= 5) {
        fine = days * 2;
        printf("Total Fine: ₹%d\n", fine);
    } 

    else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Total Fine: ₹%d\n", fine);
    } 

    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Total Fine: ₹%d\n", fine);
    } 

    else {
        printf("Membership Cancelled! You are more than 30 days late.\n");
    }

    return 0;
}