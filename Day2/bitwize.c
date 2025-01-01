/**
 * & And
 * | OR
 * ^ Xor
 * ~ Complement
 * << leftshift
 * >> rightshift
 * &
 * a b &
 * 0 0 0
 * 0 1 0
 * 1 0 0
 * 1 1 1
 * 
 * |
 * a b |
 * 0 0 0 
 * 0 1 1 
 * 1 0 1
 * 1 1 1
 * 
 * ^
 * a b ^
 * 0 0 0
 * 0 1 1
 * 1 0 1
 * 1 1 0
 * 
 * ~
 * a ~
 * 0 1
 * 1 0
 */
#include<stdio.h>
int main(){
    int a=6; //0110 
    int b=5; //0101
    // &
    printf(" a&b == %d\n",a&b); // 0100 4

    // | or
    printf(" a|b == %d\n",a|b); // 0111 7

    //^ Xor
    printf(" a^b == %d\n",a^b); // 0011 3
    // ~ Complement
    printf(" ~a == %d\n",~a); // 1000 8

    // << left shift
 

    return 0;
}