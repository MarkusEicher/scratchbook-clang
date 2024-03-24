#include <stdio.h>

// Define symbolic constants
#define LOWER   0       /* lower limit of temperature in Fahrenheit*/
#define UPPER   300     /* Upper limit of temperature in Fahrenheit */
#define STEP    20      /* Size of the steps to take */

int main(void)
{

    for(int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    {
        printf("%3d %6.1f\n", fahr, (fahr / (5.0/9.0) - (fahr - 32.0)));

    }
    
    printf("\n");
    return 0;
}