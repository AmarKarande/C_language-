#include<stdio.h>
#include<string.h>

int main(){
    //strcat = combbine the two string 
    // char str1[100]="FirstName";
    // char str2[100]="LastName";
    // strcat(str1,str2);
    // printf("Concat strings = %s",str1);-

    // Add two strings without using the strcat function*
    //printf("%s%s",str1,str2);
    // printf(str1);
    // printf(str2);

 // Add two strings without using the strcat function*

    // char str1[100]="FirstName";
    // char str2[100]="LastName";
    
    // char result[100];
    // for(int i=0;i<100;i++){
    //     if(str1[i]!=NULL){
    //         if(str1[i]!=0){
    //             result[i]=str1[i]; 
    //         }
    //         if(str1[i]==0){
    //             if(str2[i] !=0){
    //                 result[i]=str2[i];
    //             }
    //         }
    //     } 
    // }
    // printf("%s",result);
    char str1[100]="FirstName";
    char str2[100]="LastName";
    
    char result[100];
    for(int i=0;i<100;i++){
        if(str1[i]!=0){
            result[i]=str1[i];
        }
        else{
            break;
        }
       
    }
    for(int j=1;j<100; j++){
           if (str2[j] != 0) {
            result[i] = str2[j];
            i++;
        } else {
            break;
        }
    }
    printf("Without Concat = %s\n",result);


    
    return 0;
}