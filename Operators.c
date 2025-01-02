#include<stdio.h>
int main(){
    int num1=20;
    int num2=12;
    //  Addition
    int sum= num1+num2;
    printf("sum = %d \n",sum);

    //Substraction
    int sub=num1 - num2;
    printf("Sub = %d \n",sub);

    //Multiplication

    int multiply= num1*num2;
    printf("multiply = %d \n",multiply);

    // Divide
    int divide= num1/ num2;
    printf("Divide = %d \n",divide);

    // modulo used for remainder check
    int remain= num1 % num2;
    printf("Remain = %d \n",remain);

    // Increment
    int number=23;
    printf("number = %d \n", number);
    number++;
    printf("number ++ = %d \n",number++);

    // Decrement
    number=30;
    printf("number = %d \n", number);
    number-- ;
    printf("number++ = %d \n", number--);

    return 0;
}