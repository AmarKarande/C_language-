// #include<stdio.h>
// // call By reference
// int callByref(int *num);
// int main(){
//     int a=10;
//     printf("a = %d \n",a);
//     int *num=&a;
//     printf("num =  %x \n",num);

//     printf("*num = %d \n",*num);
//     callByref(30);
//     return 0;
// }
// int callByref(int *num){
//  int b=20;
//  *num = &b;
//  return *num;

// }
void swap(int *a, int *b){
  int  temp=*a;
   *a=*b;
   *b=temp;
   printf("Inside the function : a=%d b=%d \n",*a,*b);
}
#include<stdio.h>
int main(){
    int a=10; int b=20;
    printf("a=%d b=%d \n",a,b);
    swap(&a,&b);
    printf("a=%d b=%d \n",a,b);

    return 0;
}
