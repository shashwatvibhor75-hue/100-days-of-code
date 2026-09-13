#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("\nBefore swap: a = %d, b = %d\n", a, b);
    temp = a; 
    a = b;     
    b = temp;   
    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}