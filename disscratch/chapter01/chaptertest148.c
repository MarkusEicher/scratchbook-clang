#include <stdio.h>

int mystery(int val);
int myval;

int main(void)
{
    myval = mystery(123);
    printf("%d\n", myval);
    return 0;
}

int mystery(int val) {
    if (val < 10) {
         return val;
    } else {
      return (val % 10) + mystery(val / 10); 
    }
}