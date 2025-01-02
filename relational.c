#include<stdio.h>
int main(){
    //Relational operators
    int num1=20;
    int num2=30;
    int num3=20;

    //  * > greater than
    printf("grater than > === %d \n ",num1>num2);

    //  * < lesss than
    printf("less than < === %d \n", num2< num3);

    //  * <= less than or equal to
    printf("less than or equal to <= === %d \n",num1<= num2);
    printf(" less than or equal to<= === %d \n", num2 <= num3);

    //  * >= greater than or equal to
    printf(" greater than or equal to<= === %d \n", num2 >= num3);


    //  * == double equal to
    printf(" == equal to  %d \n", num1==num2);
        printf(" == equal to  %d \n", num1==num3);

  
    //  * != not equal to
     printf(" != not equal to  %d \n", num1!=num2);
        printf(" != not equal to  %d \n", num1!=num3);
    
    printf("hello coder");

    return 0;

}