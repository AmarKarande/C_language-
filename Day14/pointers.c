#include<stdio.h>
// call By reference
// Function pointer
int add(int a,int b);

int main(){
    //    Simple pointer
    int n=20;
     printf("addr of n= %x\n",&n); 
    int *ptr= &n;
    printf("ptr = %x \n",ptr);
    printf("*ptr = %d \n",*ptr); //pointer de_referencing

    // Null Pointer
//     int *null_ptr=NULL;
//    printf("%x\n",null_ptr);
//    printf("%d\n",*null_ptr);

// Array Pointers
    int arr[10]={3,5,2,1,9,4,0};
    int *ptr1=&arr;
    printf("%x \n",ptr1); // ADDRESS PRINT OF AN POINTER
    printf("%d \n",*ptr1);
    // ptr1++;
    // printf("%d \n",*ptr1);
    //  hOW TO Print an array by pointers
    printf("Array is = ");
    while(ptr1!=NULL && *ptr1!=0){
        printf("%d ",*ptr1);
        ptr1++;
    }
    printf("\n");

    // Function pointer
    int(*ptr2)(int,int)=&add;
    int result=ptr2(3,2);
    printf("result is = %d \n",result);

    return 0;
}
int add(int a,int b){
    return a+b;
}

