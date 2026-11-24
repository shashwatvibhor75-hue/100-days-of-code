#include <stdio.h>

int main() {
    int n, originalNum, remainder;
    long long reversedNum = 0; 

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    originalNum = n;

    if (n < 0) {
        printf("%d is not a palindrome.\n", originalNum);
        return 0;
    }

    while (n != 0) {
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}