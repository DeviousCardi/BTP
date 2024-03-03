#include <stdio.h>
int main() {
float a1,a2,a3,b1,b2,b3;
float x,y,z;
scanf("%f%f%f%f%f%f",&a1,&a2,&a3,&b1,&b2,&b3);
x=a1*40/50.0+b1*60/100.0;
y=a2*40/50.0+b2*60/100.0;
z=a3*40/50.0+b3*60/100.0;
if(x<=y) {
    if(y<=z)
    printf("Median weighted score=%.2f",y);
    else{
        if(z>=x)
        printf("Median weighted score=%.2f",z);
        else
        printf("Median weighted score=%.2f",x); } }
   else {
       if(y>=z)
       printf("Median weighted score=%.2f",y);
       else{
           if(x<z)
           printf("Median weighted score=%.2f",x);
           else
           printf("Median weighted score=%.2f",z); } }
    	return 0; }