#include<stdio.h>
int main(){
    /**
 * && And
 * || OR
 * !  Not Reverse
 * 
 * &&
 * a b &&
 * 0 0 0
 * 0 1 0 
 * 1 0 0 
 * 1 1 1
 * 
 * ||
 * a b ||
 * 0 0 0
 * 0 1 1
 * 1 0 1
 * 1 1 1 
 * 
 */
int a=10;
int b=20;
int c=10;

// && AND
printf(" a&&b == %d\n",a&&b);
printf("a>b && b<c == %d \n",a>b && b<c);

// || OR
printf(" a||c  == %d\n",a||c );
printf("a>b || b<c == %d \n",a>b || b<c);

// ! Not

printf(" a == %d\n",a);
    printf(" !a == %d\n",!a);
    printf(" !(a!=b && a<b): %d \n",!(a!=b && a<b));


    return 0;
}