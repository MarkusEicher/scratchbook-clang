#include <stdio.h>

int main(void)
{
    
    float fahr, cels;
    int low, high, step;

    low = 0;
    high = 300;
    step = 20;
    fahr = low;

    printf("Fahr\tCelsius\n");
    printf("---------------\n");

    while (fahr <= high)
    {
        cels = 5 * (fahr - 32) / 9;
        printf ("%3.0f %6.1f\n", fahr, cels);
        fahr = fahr + step;
    }

    printf("\n");
    return 0;
}