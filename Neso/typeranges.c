#include <stdio.h>
#include <limits.h>

int main(void) {

    int var1 = INT_MIN;
    int var2 = INT_MAX;

    unsigned int var3 = 0;
    unsigned int var4 = UINT_MAX;

    short int var5 = SHRT_MIN;
    short int var6 = SHRT_MAX;

    short unsigned int var7 = 0;
    short unsigned int var8 = USHRT_MAX;

    long int var9 = LONG_MIN;
    long int var10 = LONG_MAX;

    long unsigned int var11 = 0;
    long unsigned int var12 = ULONG_MAX;

    long long int var13 = LLONG_MIN;
    long long int var14 = LLONG_MAX;

    printf("Range of signed integer is from: %d to %d - The size is %d\n", var1, var2, sizeof(int));
    printf("Range of unsigned integer is from: %u to %u - The size is %d\n", var3, var4, sizeof(unsigned int));
    printf("Range of short signed integer is from: %d to %d - The size is %d\n", var5, var6, sizeof(short));
    printf("Range of short unsigned integer is from: %u to %u - The size is %d\n", var7, var8, sizeof(short unsigned int));
    printf("Range of long integer is from: %ld to %ld - The size is %d\n", var9, var10, sizeof(long int));
    printf("Range of long unsigned integer is from: %lu to %lu - The size is %d\n", var11, var12, sizeof(long unsigned int));
    printf("Range of long long integer is from: %lld to %lld - The size is %d\n", var13, var14, sizeof(long long int));
    return 0;
}