#include<stdio.h>

int main(){
    // Recursion 
    int fact=1;
    int num=5;
    for(int i=num;i>=1;i--){
        fact=fact*i;    
    }
    printf("%d\n",fact);

    return 0;
}