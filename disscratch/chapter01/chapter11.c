#include <stdio.h>

int x;
int y;

int main(void)
{
    printf("number of bytes in char: %lu\n", sizeof(char));
    printf("number of bytes in short: %lu\n", sizeof(short));
    printf("number of bytes in int: %lu\n", sizeof(int));
    printf("number of bytes in long: %lu\n", sizeof(long));
    printf("number of bytes in long long: %lu\n", sizeof(long long));
    printf("number of bytes in float: %lu\n", sizeof(float));
    printf("number of bytes in double: %lu\n", sizeof(double));

    printf("\n");

    x = 6;
    y = ++x + 3;  // y is assigned 9: increment x first, then evaluate x + 2 (9)

    printf("X is %i and Y is %i\n", x ,y);

    x = 6;
    y = x++ + 3;  // y is assigned 8: evaluate x + 2 first (8), then increment x

    printf("X is %i and Y is %i\n", x ,y);

    printf("\n");
    return 0;
}