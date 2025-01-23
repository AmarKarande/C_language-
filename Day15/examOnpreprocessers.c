#include<stdio.h>
#define RATE  7 //0.09 //9%
#define TIME 2
int main(){
    int A=2000;
    float SI= (A*RATE*TIME)/100;
    printf("SI = %.3lf ",SI);
    float rate= 7.0/100.0;
    int  result=pow(1 + rate, 2);
   printf("The result of (1 + 7/100)^2 is: %.3lf\n", result);
   float CI=A*result;
       printf("CI = %.3lf ",CI);


    double result;
    return 0;
}