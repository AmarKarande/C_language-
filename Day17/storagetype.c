#include<stdio.h>
#include<stdlib.h>
int main(){
    // Free : 
    // Realloc : Add addi
     //syntax
    //data-type *pointer=(type-cast*)malloc(sizeof(data-type))
    //     int *ptr= (int*)malloc(sizeof(int));
    // printf("ptr=%x\n",ptr);
    // *ptr=10;
    // printf("*ptr=%d\n",*ptr);

    // five int array store dynamically
    int *ptr2=(int*)calloc(5,sizeof(int));
    printf("%x \n",ptr2);
    printf("Enter the 5 Numbers :");
    int size=5;
    for(int i=0; i<size;i++){
     scanf("%d",&ptr2[i]);
   }
  printf("Values are : ");
     for(int i=0; i<size;i++){    
     printf("%d ",ptr2[i]);
     printf("Ptr2 = %x \n",&ptr2[i]);
   }
    return 0;
}