#include<stdio.h>
#include<string.h>
int main(){
    // Strlower and Strupper
    char str1[110]="MAHARASHTRA";
    // strlwr(str1);
    printf("%s \n",str1);

    
    for(int i=0; i<100;i++){
        if(str1[i]!=0){
            str1[i]=(str1[i]+32);
        }
    }
        printf("%s \n",str1);

        // 
    char str2[111]="mumbai";
    // strupr(str2);
    printf("%s\n",str2);

     for(int i=0; i<100;i++){
        if(str2[i]!=0){
            str2[i]=(str2[i]-32);
        }
    }
    printf("%s \n",str2);
    return 0;
}