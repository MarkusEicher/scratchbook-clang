#include <stdio.h>

// int main(void) {
//     int num, val, i;

//     printf("Enter a value: ");
//     scanf("%d", &num);
//     // make sure num is not negative
//     if (num < 0) {
//         num = -num;
//     }

//     // val = 1;
//     // while (val < num) {
//     //     printf("%d\n", val);
//     //     val = val * 2;
//     // }

//     for (i = 0; i < num; i++) {
//         printf("%d\n", i);
//     }

//     printf("\n");
//     return 0;
// }

int main(void) {
    int i, j;

    for (i=0, j=0; i < 10; i+=1, j+=10) {
        printf("i+j = %d\n", i+j);
    }

    return 0;
}