#include<stdio.h>
int main(){
    FILE *fptr=fopen("file.txt","w");
    // if(fptr!=NULL){
    //     printf("File Exists! ");
    // }else{
    //     printf("File Not Exists!");
    // }
    char str[20]="Hello World!\n";
    // for(int i=0; i<strlen(str);i++){
    //     fputc(str[i],fptr);
    // }
    // Or
    // fputc()
    int fp=0;
     for(int i=0; i<20;i++){
        if(str[i]!=0){
            fputc(str[i],fptr);
        }    fp++;
    }
    if(fp==20){
        printf("File write succesfully \n");
    }else{
        printf("File not write!\n");
    }

    // fclose(fptr);
    
    // FILE *fptr1=fopen("file.txt","a");
    char str2[30]="indiaismycountryiloveindia\n";
    fputs(str2,fptr);
    // fclose(fptr1);

    // FILE *fptr2=fopen("file.txt","a");
    int roll_no=1;
    char name[10]="Raj";
    char brach[25]="Computer Engineering";
    fprintf(fptr,"%d %s %s ",roll_no,name,brach);
    fclose(fptr);
    
    return 0;
}