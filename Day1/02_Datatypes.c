#include<stdio.h>
#include<stdbool.h>
/**
 * Primitive data types
 * int	at least 2, usually 4	%d, %i
 * char	1	%c
 * float	4	%f
 * double	8	%lf
 * short int	2 usually	%hd
 * unsigned int	at least 2, usually 4	%u
 * long int	at least 4, usually 8	%ld, %li
 * long long int	at least 8	%lld, %lli
 * unsigned long int	at least 4	%lu
 * unsigned long long int	at least 8	%llu
 * signed char	1	%c
 * unsigned char	1	%c
 * long double	at least 10, usually 12 or 16	%Lf
 */

/**
 * #include <stdbool.h>  // For boolean data type (bool, true, false)
 */

/**
 * Derived data types
 * array, pointers, function
 */

/**
 * user Defined data types
 * structure, union, enum
 */

//variables

//constant 
// #include<stdio.h>
// #define MAX 100
// int main(){
//     const float PI = 3.142;
//     return 0;

// }
int main() {
    // Int data types
    int a = 10;
    printf("The value of a is: %d\n", a);

    // Char data types
    char b = 'A';
    printf("Char b = %c \n",b);

    // float
    float c = 10.5;
    printf("float c = %f \n",c);

    // Double
    double d = 100; // d=100.20
    printf("double d = %lf \n",d);

//  Short int 
    short int e=257;
    printf("short int e = %d \n",e);

    // unsigned
    unsigned g=20;
    printf("unsigned g = %u \n",g);

    // Boolean
    bool islogin=true;
    printf("bool islogin = %d \n",islogin);




       return 0;
}
