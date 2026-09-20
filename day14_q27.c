#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        for (i = 1; i <= n; i++) {
            sum += (2 * i - 1); 
        }

        printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    }

    return 0;
}