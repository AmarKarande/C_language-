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
   StudentData s1;
   s1.s_id=12;
   char name[20]="Raj";
   strcpy(s1.s_name,name);
   s1.s_marks=50.89;
   printf("Id= %d\n",s1.s_id);
   printf("Name= %s\n",s1.s_name);
   printf("Marks= %lf\n",s1.s_marks);

   return 0;
}