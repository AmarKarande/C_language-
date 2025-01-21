#include<stdio.h>
int finbonacci(int n);
int main(){
    // Recursion 
    //  int result=finbonacci(10);
    int n=5;
    for(int i=0;i<=n;i++){
        printf("%d ",finbonacci(i));
    }
   
    // printf("%d ",result);
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

