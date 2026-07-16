#include<stdio.h>

int main(void)
{
    int gs1_prefix, group_identifier, publisher_code, item_number, check_digit;

    printf("Enter ISBN : ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);


    printf("GS1 Prefix : %d\nGroup Identifier : %d\nPublisher Code : %d\nItem Number : %d\nCheck Digit : %d", gs1_prefix, group_identifier, publisher_code, item_number, check_digit);

    return 0;

}