#include<stdio.h>
int main(){
    //Insertion Sort
    int arr[] ={4,3,1,5,2}     ;
    int size=5;
    printf("Unsorted Array :");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    for(int i=1; i<size;i++){
        int sorted=i-1;
        int unsorted=arr[i];
        while (sorted>=0 && arr[sorted]>unsorted)
        {
            arr[sorted+1]=arr[sorted];
            sorted--;
        }
        arr[sorted+1]=unsorted;  
    }
    printf("\n");
      printf("Sorted Array : ");
       for(int i=0; i<size; i++){
          printf("%d ",arr[i]);
        }
    
    return 0;
}