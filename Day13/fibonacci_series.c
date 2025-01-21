#include<stdio.h>
int finbonacci(int n);
int main(){
    // Recursion 
     //print Series
    int n=10;
    printf("Fib series of number %d = ",n);
    for(int i=0;i<=n;i++){
        printf("%d ",finbonacci(i));
    }
    printf("\n");
    // print Total
    int result=finbonacci(n);
    printf("Total of series of number %d = %d \n",n,result);
    return 0;
    }
    int finbonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
   return finbonacci(n-1)+finbonacci(n-2);
}

