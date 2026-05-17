#include <stdio.h>

/* Add Function */
int add(int arg1 , int arg2){
    return arg1 + arg2;
}

/* Important task */
int calculate(int a, int b, int func){
    switch(func){
        case 1:
            add(a, b);
            break;
        case 2:
            return a - b;
            break;
        default:
            printf("\r\n Enter a valid operation\r\n");
    }
}

int main(){

    int var1,var2,sum, diff;
    var1 = 10;
    var2 = 20;

    sum = calculate(var1, var2, 1);
    diff = calculate(var1, var2, 2);

    printf("\r\n the sum of the two numbers %d adn %d is %d \r\n", var1, var2, sum);
    printf("\r\n The differnce between %d and %d is %d \r\n", var1, var2, diff);
    
    return 0;
}