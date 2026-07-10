#include<stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    printf("You entered the date %d%2.2d%2.2d", year, month, day);

    return 0;
}