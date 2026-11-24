
#include <stdio.h>

int main()
{
    long long n, digit, complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n > 0)
    {
        digit = n % 10;

        if (digit == 0)
            complement = complement + 1 * place;
        else
            complement = complement + 0 * place;

        place = place * 10;
        n = n / 10;
    }

    printf("1's complement = %lld", complement);

    return 0;
}
