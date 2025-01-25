#include<stdio.h>
#include<string.h>
//  Structure Eg= student= name, Id, Mobile No
   // Syntax= struct var_name{ values };
   struct StudentData{
      // Data
      char s_name[20];
      int s_id;
      double s_marks;
} typedef StudentData;
int main(){
   StudentData arr[3];
     for(int i=0; i<3;i++){
        printf("Enter Student id : ");
        scanf("%d",&arr[i].s_id);

        printf("Enter Student Name :");
        scanf("%s",&arr[i].s_name);

        printf("Enter Student Marks : ");
        scanf("%lf",&arr[i].s_marks);
     }
     for(int i=0; i<3; i++){
        printf("Id= %d\n",arr[i].s_id);
        printf("Name= %s\n",arr[i].s_name);
        printf("Marks= %.2lf\n",arr[i].s_marks);
     }
   return 0;
}