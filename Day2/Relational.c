/**
 * ==
 * !=
 * > greater than
 * < less than
 * <= less than
 * >= greater than
 */
#include<stdio.h>
int main(){
    int a=20;
    int b=10;
    int c=20;

    //Double equal to ==  true=1; false=0
    printf("a==c %d\n",a==c);
     printf("a==b %d\n",a==b);

    //  != not equal to true=1; false=0
    printf("a!=b %d\n",a!=b);
    printf("a!=c %d\n",a!=c);

    // >= greater than equal to
    printf("a>=b %d\n",a>=b);
     printf("a>=c %d\n",a>=c);

   //<= less than equal to
   printf("a<=c %d\n",a<=c);
      printf("c<=b %d\n",c<=b);

       // < less than
    printf("a<c %d\n",a<c);
        printf("b<a %d\n",b<a);

    // > greater than
    printf("a>c %d\n",a>c);



    return 0;
}