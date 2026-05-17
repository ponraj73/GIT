/* This program is adden in the develop branch */

#include <stdio.h>

/* Subtraction Function */
int sub(int a, int b){
    return a - b;
}

int main(){

    int var1, var2, diff;
    var1 = 50;
    var2 = 30;

    sub(var1, var2);

    printf("\r\n The differnce between %d and %d is %d \r\n", var1, var2, diff);

    return 0;
}