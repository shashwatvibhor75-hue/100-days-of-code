#include <stdio.h>

int main() {
    long long n;

    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n == 0) {
        printf("Zero has infinitely many factors (every integer divides zero).\n");
        return 0;
    }

    long long abs_n = (n < 0) ? -n : n;

    printf("Factors of %lld are: ", n);

    for (long long i = 1; i <= abs_n; i++) {
        if (abs_n % i == 0) {
            printf("%lld ", i);
        }
    }

    printf("\n");
    return 0;
}