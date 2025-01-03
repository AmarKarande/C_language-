#include<stdio.h>
int main(){
    int number;
    printf("Enter a Number :");
    // scanf("format specifier", &variable_name)
    scanf("%d",&number);
    printf("number = %d \n ",number);

    // scan characters
   char c,temp;
   printf("Enter a character : ");

   scanf("%c",&temp);
   scanf("%c",&c);
   printf("c = %c \n",c);

   float f;
   printf("Enter a float : ");
   scanf("%f",&f);
   printf("f == %f",f);

    return 0;
}