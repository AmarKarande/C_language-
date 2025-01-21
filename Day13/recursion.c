#include<stdio.h>
int factorial(int n);
int main(){
    // Recursion 
    int result=factorial(5);
    printf("%d",result);
    return 0;
}
int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
