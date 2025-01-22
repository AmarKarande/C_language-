#include<stdio.h>
int addition(int arr[], int size){

    //
       int res=0;
       for(int i=0; i<=size;i++){
         res+=arr[i];
       }
        return res;
}
int main(){
    int size=5;
    int arr[6]={10,20,30,40,50};
  int result=addition(arr,size);
  printf("Result is = %d",result);
    // int result=addition()
    return 0;
}
