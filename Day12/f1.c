#include<stdio.h>

// void add();
void multiply(int x, int y); // Formal values passing
void userinput(int nums1, int nums2);
int main(){
     int num1=20; 
    int num2=30;
    add();
    add(num1,num2);
    multiply(10,20);
    multiply(num1,num2);
    userinput(10,20);
    return 0;
}
void add() { // Add two number
    int num1=10;
    int num2=20;
    int result=num1+num2;
    printf("Result is = %d\n",result);
}
void multiply(int x, int y){ // Formal Parameters
    printf("Multiplication of %d * %d = %d \n",x,y,x*y);
}
void userinput(int nums1, int nums2){
    scanf("Num1 = %d \n",&nums1);
    scanf("Num2 = %d\n",&nums2);

    printf("Additionof %d + %d = %d \n",nums1,nums2,nums1+nums2);

}
