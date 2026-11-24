#include <stdio.h>

int main() {
    unsigned int n;
    
    printf("Enter a positive integer: ");
    if (scanf("%u", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Binary representation: ");

    int numBits = sizeof(n) * 8; 
    int leadingZeros = 1;        

    for (int i = numBits - 1; i >= 0; i--) {
        int k = n >> i;
        if (k & 1) {
            printf("1");
            leadingZeros = 0; 
        } else if (!leadingZeros) {
            printf("0");
        }
    }

    if (leadingZeros) {
        printf("0");
    }

    printf("\n");
    return 0;
}