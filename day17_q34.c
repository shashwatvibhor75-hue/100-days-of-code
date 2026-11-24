#include <stdio.h>

int main() {
    long long n;
    int isPrime = 1;

    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }
    if (isPrime) {
        printf("%lld is a prime number.\n", n);
    } else {
        printf("%lld is not a prime number.\n", n);
    }

    return 0;
}