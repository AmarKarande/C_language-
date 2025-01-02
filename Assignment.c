#include<stdio.h>
int main(){
/**
 * =
 * +=
 * -=
 * *=
 * /=
 * %=
 */
int a=20;
int b=10;

// = assignment
a=30;
printf("a=  %d \n",a);

// +=  ( eg a=a+1)
b+=20;
printf("b=  %d \n",b);

// -= eg( a==10 & a-=1== a=a-1)
b-=10;
printf("b-= == %d \n", b);

//*= eg(a*4== a=a*4)
printf("a*=4 ==  %d \n",a*=4);

// /= eg(a/=4== a= a/4);
printf("b/=2 == %d \n",b/=2);

// %= (a%=2== a= a%2)
b=11;
printf("b%=2 == %d \n",b%=2);


    return 0;
}