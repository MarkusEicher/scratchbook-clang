#include <stdio.h>
#include "extern.c"

// extern int count;

int main(void)
{
    int value;

    // printf("The external count is now: %d\n", count);
    printf("The local value is now: %d\n", value);

    value = increment();
    value = increment();
    value = increment();

    // printf("The external count is now: %d\n", count);
    printf("The local value is now: %d\n", value);

    // count = count + 3;
    value = value + 4;

    // printf("The external count is now: %d\n", count);
    printf("The local value is now: %d\n", value);


    printf("%d\n", value);
    
    return 0;
}