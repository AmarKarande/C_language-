#include<stdio.h>
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//    FUNCTION WITH RETURN TYPE 
// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
// AREA OF CIRCLE FUNCTION
int areaOfCircle( int r);
int circumference(int r);
int areaOfTriangle(int base, int height);
int main() {
    int radius=10;
    int result=areaOfCircle(radius);
    printf("Area of circle is= %d (square unit) \n",result);
    int result1=circumference(radius);
    printf("Circumference of circle is= %d unit \n",result1);
    
    int result2=areaOfTriangle(10,20);
    printf("Area of Triangle is= %d unit \n",result2);

    return 0;
}
int areaOfCircle(int r){
    return 3.142*r*r;
}
int circumference(int r){
    return 2*3.142*r;
}
int areaOfTriangle(int base, int height){
    return 0.5*base*height;
}
