/**
 * sizeof
 * sizeof (operand)
 * , 
 * (operand1 , operand2)
 * ?:
 * (condition ? operand1 : operand2)
 * . dot -> used to access struct members
 * cast
 * (new_type) operand; 
 * & returns the address of a var
 * * pointer var
 */
#include<stdio.h>
int main(){

    //sizeof // Display size of datatype
    int a=20;
    char c='#';
    printf("a= %d\n",a);
    printf("sizeof a== %d \n",sizeof(a));
    printf("sizeof #== %d \n",sizeof(c));

    // comma ,
    int f=20, d=30,e=50;

    //?: //ternary operator
//  (condition ? operand1 : operand2)
int b=20;
 (a>b)?  printf("yes \n") : printf("no\n");
  (d<a)?  printf("no \n") : printf("yes \n");

   // . ->  //struct union

  //cast //type casting
  int num1=10;
  float var=13.45;
  printf("num1 to float == %f \n",(float)num1);
  printf("num2 float to num== %d \n",(int)var);

    //&
    
    int num=100;
    printf("num& == %x\n",num);

    // * pointer
    num =1000;
     int *ptr = &num;
    printf("num pointer== %d \n", *ptr); //disp the val at the address 
    
      printf("num pointer== %d \n", ptr); //disp the address of the pointing var
       printf("num pointer== %x \n", ptr);
        printf("num pointer== %x \n", *ptr);




    return 0;
}