#include <stdio.h>
#include<string.h>

int main() {
    char str1[12]={"HelloAmark"};
   char str2[12];
   printf("\n"); 
    // Print the length of an string
   printf("length of string : %d",strlen("amarsk"));
   printf("\n");
  
   int size=strlen(str1);
 

   printf("\n");
   
//    Without function print calculate the length
 printf("String is = ");
    for(int i=0;i<size;i++){
        int temp;
        temp=str1[i];
        str1[i]=str2[i];
        str2[i]=temp;
        printf("%c",str2[i]);
    }

    //  for(int i=0;i<size;i++){
    //   printf(" %c",str2[i]);
    // }
    // how to find length of string without using length

    return 0;
}
