#include<stdio.h>

#include<stdio.h>

int main(void)
{
    int x = 0;

    printf("Enter the value of x : ");
    scanf("%d", &x);

    printf("The value of the polynomial: %d", ((((3*x + 2) * x-5) * x-1) * x+7) * x-6);

    return 0;
}