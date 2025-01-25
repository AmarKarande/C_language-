#include<stdio.h>
int main(){
     // //accept and display array elements
    // //dynamic array
    int size=5;
    int dyn_arr[size];
    //Accepting values
    for(int i=0;i<size;i++){
       printf("enter val for dyn_arr[%d]:",i);
       scanf("%d",&dyn_arr[i]);
    }
    //displaying values   
     for(int i=0;i<size;i++){
        printf("val in dyn_arr[%d]:%d\n",i,dyn_arr[i]);
    } 
    return 0;
}