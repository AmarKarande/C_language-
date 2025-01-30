#include<stdio.h>
#include<string.h>

int main(){
    printf("Enter character and number: ");
    char ch[20];
    int num,i;
    // int size=strlen(ch);
    
    scanf("%s",&ch);
    //  printf("%s",ch);
   for(i=0;i<strlen(ch);i++){
    if(ch[i]>='a' && ch[i]<='z'){
        char str;
        str=ch[i];
        num=ch[i+1]- '0';
        for(int j=0; j<num;j++){
            printf("%c",str);
        }
     }
   }
    return 0;
}