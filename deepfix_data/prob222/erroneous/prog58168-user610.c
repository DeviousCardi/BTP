#include <stdio.h>
int main() {
    float a1,b1,c1,a2,b2,c2;
    float x,y,z;
    scanf("%f%f%f",&a1,&b1,&c1);
    scanf("%f%f%f",&a2,&b2,&c2)
	x=a1*0.4+a2*0.6;
	y=b1*0.4+b2*0.6;
	z=c1*0.4+c2*0.6;
	if(x>y) {
	    if(x<z)
	    {printf("%.2f",x);}
	    else if(y>z)
	    {printf("%.2f",y);}
	    else
	    {printf("%.2f",z);} }
	else {
	    if(x>z)
	    {printf("%.2f",x);}
	    else if(y>z)
	    {printf("%.2f",z);}
	    else
	    {printf("%.2f",y);} }
	return 0; }