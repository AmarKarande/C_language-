#include<stdio.h>
#include<string.h>
 // File Handling
    //file open, read, write, close(compulsarry)
    //read write and append // open methods r,w,a
int main(){
   FILE *fptr;
    // Syntax  file_dereference=fopen("filename.extension","mode")

   fptr=fopen("example.txt","r");
//     if (fptr!=NULL){
//    printf("File Exists!\n");
//    }
//    else{
//     printf("File Does not Exists!\n");
//    }
// Print ascii value
//    char temp;
//    int counter=0;
//    int space=0;
//    int enter=0;
//    int lines=0;
//    int words=0;
//    char ch;
// //    int word=0;
//    printf("File Character is =");
//    printf("\n");
//    while((temp=fgetc(fptr))!= EOF){
    
//     // if(temp==32|| temp==10 || temp||59){
//     //     words++;
//     // }
//     // if(temp==10 || temp==59){
//     //     lines++;
//     // }
//     int ct=(int)temp;
//      if(ct==32 || ct==10 || ct==59){
//         words++;
//     }
//     if(ct==10|| ct==59){
//         lines++;
//     }
//     printf("Char = %c ",temp);
//      printf("Ascii Value = %d \n",temp);
//     counter++;
//    }
//    printf("\n");
//    printf("Total No of Alphabets = %d \n",counter);
// //    printf("Total No of Space = %d \n",space);
// //    printf("Total No Enter = %d \n",enter);
// printf("Total No Word = %d \n",words);
// printf("Total No Lines = %d \n",lines); 
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   // READING LINE FROM FILE USING = fgets();
//    syntex= fgets(name,sizeof(name),ptr);
// char str[100];
// while(fgets(str,100,fptr)!=NULL){
//     printf("%s",str);
// }
// fscanf
    int id;
    char name[100],role[100];
    float sal;
    while(fscanf(fptr,"%d %s %s %f",&id,&name,&role,&sal)==4){
    printf("id= %d\t",id);
    printf("name = %s\t",name);
    printf("role = %s\t",role);
    printf("role = %.2f\t",sal);
    printf("\n");
    }

    return 0;
}