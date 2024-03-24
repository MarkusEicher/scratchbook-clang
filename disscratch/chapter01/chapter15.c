/* An example C program using an array. */
#include <stdio.h>

#define ARRAYSIZE 5

void print_array(int arr[], int size);

int main(void) {
    int i, size = 0;

    // declare array of 10 ints
    int my_arr[ARRAYSIZE];

    // set the value of each array element
    for (i = 0; i < ARRAYSIZE; i++) {
        my_arr[i] = i;
        size++;
    }

    // set value at position 3 to 100
    my_arr[3] = 100;

    // print the number of array elements
    printf("array of %d items:\n", size);

    // // print each element of the array
    // for (i = 0; i < ARRAYSIZE; i++) {
    //     printf("%d\n", my_arr[i]);
    // }

    print_array(my_arr, ARRAYSIZE);

    printf("\n");
    return 0;
}

void print_array(int arr[], int size) 
{
    int i;
    for (i = 0; i < ARRAYSIZE; i++) {
        printf("%d\n", arr[i]);
    }
}