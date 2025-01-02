#include<stdio.h>
int main(){
    int num1=10;
    int num2=6;

    // bitwize and &
    printf("num1&num2 == %d\n",num1 & num2);

    // or |
    printf("num1 | num2 == %d\n",num1 | num2);

    // xor ^
    printf("num1^num2 ==%d \n",num1^num2);

    // ~ x nor tiddle
    printf("~num1 == %d\n",~num1);  

    //left shift << increase the value llike multiplication
    
    printf("num1<<1 == %d \n",num1<<1);
        printf("num1<<1 == %d \n",num1<<2);

    // right shift >>
    printf("num2>>1 == %d\n",num2>>1);
    printf("num2>>2 == %d\n",num2>>2);
    printf("num1>>3 == %d\n",num1>>2);




    

    return 0;
}