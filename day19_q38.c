#include <stdio.h>

int main() {
    long long n, temp;
    long long sum = 0;

    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    temp = (n < 0) ? -n : n;

    while (temp > 0) {
        sum += temp % 10; 
        temp /= 10;     
    }

    printf("Sum of the digits of %lld is: %lld\n", n, sum);

    return 0;
}