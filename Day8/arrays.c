#include<stdio.h>
int main(){
    // Binary Search
    int size=9;
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int start=0;
    int end=size-1;
    int key;
    int flag=0;

    // User input
    printf("Enter a element for search : ");
    scanf("%d",&key);

 
    while(start<=end){
        // int mid= start+(end-start)/2;
        int mid=(start+end)/2;
        if(key==arr[mid]){
            printf("Element found at index arr[%d]= %d  \n",mid,arr[mid]);      
            flag=1;
            break;
        }
        else if(key<arr[mid]){
            end=mid-1;
            start=start;
        }
        else {
            start=mid+1;
            end=size-1;
        }     
    }
    if(flag==0){
        printf("Element not found!");
    }
    return 0;
}