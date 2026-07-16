#include<stdio.h>

int main(void)
{
    int first_digits, second_digits, third_digits;

    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf(" (%d) %d-%d", &first_digits, &second_digits, &third_digits);

    printf("You entered: %d.%d.%d", first_digits, second_digits, third_digits);

    return 0;
}