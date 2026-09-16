#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
    
        if (num == 0) {
            printf("%d is Zero.\n", num);
        } else {
            printf("%d is a Positive number.\n", num);
        }
    } else {
        printf("%d is a Negative number.\n", num);
    }

    return 0;
}