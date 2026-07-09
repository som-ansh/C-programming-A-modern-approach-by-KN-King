#include<stdio.h>

#define PI (22.0f / 7.0f)

int main(void)
{
    float radius = 10;
    float volume = (4.0f / 3.0f) * PI * radius * radius * radius;

    printf("The volume of the sphere is: %.2f", volume);

    return 0;
}