#include<stdio.h>
// call By reference
int callByref();
int main(){
    return 0;
}
int callByref(){
    return callByref();
}
