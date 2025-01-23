 #include<stdio.h>
// Used to define a macro. (macro:shortcut task)
//  #define PI 3.14159265358
//  Used to undefine a macro.
// #undef PI

// #include : Used to include a file in the source code program.
// #include <String.h>

// #ifdef : Used to include a section of code if a certain macro is defined by #define.
// #define MAX 20
// #ifdef MAX > 10
//    printf("MAX is Greater the 10\n");

// #endif

// #ifndef MAX
//  #define MAX 100
//  #endif
// **************************************
// IF def and else defifde
// #define MAX 5
// #if MAX > 10
// #define msg "Max is greater than 10" 
// #elif MAX<20
// #define msg "Max is less than 10" 
// #else
// #define msg "Invalid" 
// #endif

// #error msg //  USed to display erro

#line 30 "pre.c"


 int main(){
    float result=PI*5*5;
    printf("Result = %lf \n",result);

    char name[10]="Whileloop";
    printf("Name = %s",name);

 printf("MAX is: %d\n", MAX);  
Ifdef and eles def
printf("Msg is = %s",msg);

    
    return 0;
 }