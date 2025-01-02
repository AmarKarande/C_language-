#include<stdio.h>
int main(){
    
    int a=10;
    int b=20;
    int c=10;
    // Logical and== &&
    printf("a<b && a<b = %d \n", a>b && a<b);
    printf("a==c && a<c = %d \n",a==c && a<b);

    // Logical or  ||
    printf(" a>b || b<c =  %d \n", a>b || b<c);
    printf("a<b || c>b =  %d \n",a<b || c>b);

    // Logical not ! change true= flase and false= true
    printf("!(a>b) = %d \n",!(a>b));
     printf("!(a<b && a<b = %d \n"), !(a>b && a<b) ;

     // 








    return 0;
}