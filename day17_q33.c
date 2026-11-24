#include <stdio.h>
long long power(int base, int exp) {
    long long res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

int main() {
    long long n, originalNum;
    long long sum = 0;
    int digits = 0;

    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    originalNum = n;

    if (n < 0) {
        printf("%lld is not an Armstrong number.\n", originalNum);
        return 0;
    }

    if (n == 0) {
        digits = 1;
    } else {
        long long temp = n;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }

    long long temp = n;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += power(remainder, digits);
        temp /= 10;
    }

    if (sum == originalNum) {
        printf("%lld is an Armstrong number.\n", originalNum);
    } else {
        printf("%lld is not an Armstrong number.\n", originalNum);
    }

    return 0;
}