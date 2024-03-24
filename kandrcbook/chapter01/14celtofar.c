#include <stdio.h>

int main(void)
{
    float cel, far;
    int lower, upper, steps;

    lower = 0;
    upper = 300;
    steps = 20;

    printf("Cel\tFahr\n");
    printf("---------------\n");

    cel = lower;

    while(cel <= upper)
    {
        far = cel * 1.8 + 32;
        printf("%3.0f %6.1f\n", cel, far);
        cel = cel + steps;
    }

    printf("\n");
    return 0;

}