#include<stdio.h>
int main(){

    //assign values to iterator == initialization
    // int number=1;
    // while(number<11){ //Condition to stop
    //     printf(" %d \n",number*2 );
    //     number++;
    // }

    // ######################
    // Write a code for the taking input from user and print the table
    int num ;
    int a=1;
    printf("Enter a Number to get the table :");
    scanf("%d", &num); 
 
    while(a<11){
        
         printf("%d x %d = %d\n", num, a, num * a);
        a++;
    }
    return 0;
}              