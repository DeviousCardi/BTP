#include <stdio.h>
int main() {
float a1,a2,b1,b2,c1,c2;
float x,y,z;
scanf("%f%f%f",&a1,&b1,&c1);
printf("\n");
scanf("%f%f%f",&a2,&b2,&c2);
x=a1*(40.0/50)+a2*(60.0/100);
y=b1*(40.0/50)+b2*(60.0/100);
z=c1*(40.0/50)+c2*(60.0/100);
if((x>y && x<z) || (x>z && x<y))
printf("Median weighted score = %.2f",x);
else if((y>x && y<z) || (y>z && y<x))
printf("Median weighted score = %.2f",y);
else
printf("Median weighted score = %.2f",z);
	return 0; }