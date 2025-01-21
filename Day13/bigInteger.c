#include<stdio.h>
double factorial(double n);
int main(){
    // Recursion 
    double result=factorial(10);
    printf("%lf",result);
    return 0;
}
double factorial(double n){
    if(n==0|| n==1){
        return 1;
    }
    return n*factorial(n-1);
}
