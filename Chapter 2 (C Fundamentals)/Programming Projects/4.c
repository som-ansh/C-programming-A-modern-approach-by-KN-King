#include<stdio.h>

int main(void)
{
    float amount =  0.0f;

    printf("Enter an amount in dollars-and-cents : ");
    scanf("%f", &amount);

    printf("With tax added : $%.2f", amount * (1 + 0.05));

    return 0;

}