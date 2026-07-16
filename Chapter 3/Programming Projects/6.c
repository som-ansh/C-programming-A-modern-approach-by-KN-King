#include<stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("ENter two fractions separated by a plus sign: ");
    scanf(" %d/%d+%d/%d", &num1, &denom1, &num2, &denom2); /*format string starts with a whotespace character so as to match any */

    result_num = (num1 * denom2) + (num2 * denom1);
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;

}