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

    if (num1 == 0 || num2 == 0) {
        printf("LCM of %lld and %lld is: 0\n", num1, num2);
        return 0;
    }

    long long abs_num1 = (num1 < 0) ? -num1 : num1;
    long long abs_num2 = (num2 < 0) ? -num2 : num2;

    long long gcd = findGCD(abs_num1, abs_num2);
    long long lcm = (abs_num1 / gcd) * abs_num2;

    printf("LCM of %lld and %lld is: %lld\n", num1, num2, lcm);

    return 0;
}