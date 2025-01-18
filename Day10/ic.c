#include <stdio.h>
#include<string.h>

int main() {
    char str1[12]={"HelloAmark"};
   char str2[12];
   printf("\n"); 
//    int size=strlen(str1);
 int length=0;
 for(int i=0; i<12;i++){
    if(str1[i] !=0){
        length=length+1;
    }
 }
printf("length = %d \n",length);
//  for(int i=0;i<length;i++){
//         int temp;
//         temp=str1[i];
//         str1[i]=str2[i];
//         str2[i]=temp;
//         printf("%c",str2[i]);
//     }
int size=100;
char src1[100]="copies the contents of source string to destination string.";
    // for(int i=0;i<size;i++){
    //     printf("%d ",src1[i]);
    // }
    char dest1[100];
    for(int i=0;i<size;i++){
        if(src1[i]!=0){
            src1[i]=dest1[i];
        }
    }
     printf("without strcpy() dest1 string= %s\n",dest1);
return 0;
}
