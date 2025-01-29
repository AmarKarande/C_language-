#include<stdio.h>
#include<string.h>

int main() {
//    String declare using character array
//  char_datatype str_name[size]= value;
    // char arr_name[5]="Amar";
    // Print an string
    // printf("Name = %s \n", arr_name);

    // &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
    // take input an array
    char name[5];
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("name = %s",name);

    // Using for looop
    int temp;
    scanf("%s",&temp);
    char name2[5];
    printf("\n");
    printf("Enter a name2 : ");

    for(int i=0; i<5;i++){ 
        int temp;
        scanf("%s",temp);

        scanf("%c",name2);
    }
    for(int i=0; i<5;i++){
       printf(" %c",name2[i]);
    }
    return 0;
}
// take input character and print the charcter
//  printf("Enter a Name : ");
//     char name;
//     scanf("%c",&name); // %c used for single character
//     printf("%c",name);