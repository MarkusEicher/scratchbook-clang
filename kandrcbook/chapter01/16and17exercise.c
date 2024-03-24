#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) !=EOF)

    {
        putchar(c);
    }

    // return 0;
    printf("EOF: %d\n", EOF);
    printf("value of expression: %d", getchar() !=EOF);

    // c = getchar();
    // while (c != EOF)
    // {
    //     putchar(c);
    //     c = getchar();
    // }
    
    // return 0;
    
}