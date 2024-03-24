/* This program computes the larger of two
 * values entered by the user.
 */
#include <stdio.h>

int max(int x, int y);
void print_table(int start, int stop);

int main(void)
{
    // max(1, 2);
    printf("The bigger number is %d\n", max(5, 2));
    printf("\n");
    print_table(1, 10);
    return 0;
}

/* max: computes the larger of two integer values
 *   x: one integer value
 *   y: the other integer value
 *   returns: the larger of x and y
 */
int max(int x, int y) {
    int bigger;

    bigger = x;
    if (y > x) {
        bigger = y;
    }
    printf("  in max, before return x: %d y: %d\n", x, y);
    return bigger;
}

/* prints out the squares from start to stop
 *   start: the beginning of the range
 *   stop: the end of the range
 */
void print_table(int start, int stop) {
    int i;

    for (i = start; i <= stop; i++) {
        printf("%d\n", i*i);
    }
    printf("\n");
}