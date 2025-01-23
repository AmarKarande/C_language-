#include<stdio.h>
void addition(int *a){
    *a+=10;
    printf("In function : a = %d \n",*a);

//    *a+=5;
    //    printf("In function : a = %d \n",*a);
}

int main(){
    int a=20;
    printf("a= %d \n",a);
    addition(&a);
    printf("After call function : a = %d \n",a);
    return 0;
}