#include<stdio.h>
#include<string.h>

struct StudentData{
    char name[20];
    int id;
    double marks;
} typedef StudentData;

int main(){
    StudentData arr[5];

    FILE *fptr= fopen("filess.txt","w");
      

      for(int i=0; i<5;i++){
        printf("Enter Student id : ");
        scanf("%d",&arr[i].id);

        printf("Enter Student Name :");
        scanf("%s",&arr[i].name);

        printf("Enter Student Marks : ");
        scanf("%lf",&arr[i].marks);

     }
      for (int i = 0; i < 5; i++) {
        fprintf(fptr, "ID: %d, Name: %s, Marks: %.2f\n", arr[i].id, arr[i].name, arr[i].marks);
    }
    //  fprintf(arr,fptr);
     fclose(fptr);
    return 0;
}