#include <ctype.h>
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isalpha(ch)) {
        char lower_ch = tolower(ch);

        if (
            lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' ||
            lower_ch == 'o' || lower_ch == 'u'
        ) {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Error: Please enter a valid alphabetic character.\n");
    }

    return 0;
}