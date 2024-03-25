#include <stdio.h>

int main(void)
{

    float var1 = 3.1415926535897932;
    double var2 = 3.1415926535897932;
    long double var3 = 3.141592653589793213456;

    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));
    printf("%.16f\n", var1);
    printf("%.16f\n", var2);
    printf("%.21lf\n", var1);

    printf("\n");

    // int var4 = 4/9;
    // printf("%d\n", var4);

    // float var5 = 4/9;
    // printf("%.4f\n", var5);

    // float var6 = 4.0/9.0;
    // printf("%.4f\n", var6);

    // double var7 = 4.0/9.0;
    // printf("%.4f\n", var7);

    return 0;
}