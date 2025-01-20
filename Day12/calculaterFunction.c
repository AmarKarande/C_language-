#include<stdio.h>
void calculator();
int main() {
    calculator(12,10);
    return 0;
}
void calculator(int x, int y){
    char operation;

    printf("Select Oprations :  + - * / mod    = ");
    scanf("%c",&operation);

    switch(operation){
        case '+':
        printf("Addition of %d + %d = %d\n",x,y,x+y);
        break;
        case '-':
        printf("Substraction of %d - %d = %d \n",x,y, x-y);
        break;
        case '*':
        printf("Multiplication of %d * %d = %d \n",x,y,x*y);
        break;
        case '/':
        printf("Division of %d / %d = %d\n ", x,y, x/y);
        break;
        case '%':
        printf("Modulo of %d // %d = %d",x,y,x%y);
        break;
        default:
            printf("Invalid Input!");        
    }
}
