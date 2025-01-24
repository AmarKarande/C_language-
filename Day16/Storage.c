#include<stdio.h>
// Extern declare globally and access globally
extern int number=50;
void call_fun(){
    // auto
    auto int num=20;
    printf("Num1 = %d \n",num);
    num++; // Not increment only on print
    // printf("Num = %d \n",num);
    // register
    register int num1=10;
    printf("Num1 = %d \n",num1);
    num1++;// Not increment only on print
    // static : value change on call
    static int num2=34;
    printf("Num2 = %d\n",num2);
    num2++;
    // Exter : Value Across the exter 
    printf("Number = %d\n",number);
    number++;
}
int main(){
    // Storage classes
    // Auto
    auto int num=30;
    printf("Num = %d \n",num);
     register int num1=10;
    printf("Num1 = %d \n",num1);
    static int num2=12;
    printf("Num2 = %d\n",num2);
    printf("Number = %d\n",number);

    call_fun();
    call_fun();
    call_fun();
    // number++;

    return 0;
}