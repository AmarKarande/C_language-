#include<stdio.h>
#include<string.h>
int main() {
    char str1[10]="Nilesh";
    char str2[10]="Nilesh";
    // Compare string = strcmp(str1,str2);
    // if is equal to then the return 0 and not equal to -1
    // printf("Compare strings witth strcmp() = %d \n",strcmp(str1,str2));
    int flag = -1;
    for(int i=0;i<10;i++){
        if(str1[i]==str2[i]){
           flag= 0;
        //    break;
        }
        else{
            flag= -1;
            break;
        }    
    }
    if(flag==0){
        printf("Equal Strings.\n");
    }else   if(flag== -1) {
        printf("Non Equal Strings! \n");
    }
    return 0;
}