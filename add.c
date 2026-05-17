#include <stdio.h>

/* Add Function */
int add(int a , int b){
    return a + b;
}

int main(){

    int var1,var2,sum;
    var1 = 10;
    var2 = 20;

    add(var1, var2);

    printf("\r\n the sum of the two numbers %d adn %d is %d \r\n", var1, var2, sum);
    return 0;
}