#include <stdio.h>
int  main()
{
    int n1, n2, sum, pro, diff;
    double div;
    printf("enter 2 numbers");
    scanf("%d %d", &n1, &n2);
    sum = n1 + n2;
    pro = n1 * n2;
    diff = n1 - n2;
    div = n1/n2;
    printf("sum is %d\n", sum);
    printf("product is %d\n", pro);
    printf("difference is %d\n", diff);
    printf("quotient is %.2f\n", div);
    return 0;

}