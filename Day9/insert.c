#include<stdio.h>
int main(){
    int size=5;
    int arr[]={13,2,15,8,1};
    printf("Unsorted array : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    //  for sort a array
    for(int i=1; i<size; i++){
        int sortedarr=i-1;
        int unsortedarr=arr[i];
        while(sortedarr>=0 && arr[sortedarr]>unsortedarr){
            arr[sortedarr+1]=arr[sortedarr];
            sortedarr--; // For loop break
        }
        arr[sortedarr+1]=unsortedarr;
    }
    printf("\n");
    printf("Sorted array : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int flag=0;
    int start=0;
    int end=size-1;
    int target=15;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(target==arr[mid]){
            printf("Element found at index  %d  \n",mid,arr[mid]);      
            flag=1;
            break;
        }
        else if(target<arr[mid]){
            start=start;
            end=mid-1;
        }else{
            start=mid+1;
            end=end;
        }
    }
    if(flag==0){
        printf("Element not Found");
    }
    return 0;
}