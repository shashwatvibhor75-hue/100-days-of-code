#include <stdio.h>
long long findGCD(long long a, long long b) {
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;
    
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long num1, num2;

    printf("Enter two integers: ");
    if (scanf("%lld %lld", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num1 == 0 && num2 == 0) {
        printf("GCD of 0 and 0 is technically undefined.\n");
        return 0;
    }

    long long hcf = findGCD(num1, num2);
    
    printf("HCF (GCD) of %lld and %lld is: %lld\n", num1, num2, hcf);

    return 0;
}