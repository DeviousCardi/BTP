#include <stdio.h>
int main() {
    float a,b,c,x,y,z;
    float A,B,C;
	scanf("%f %f %f \n",&a,&b,&c);
	scanf("%f %f %f ",&A,&B,&C);
	x= a*40/50 + A*60/100;
	y= b*40/50 + B*60/100;
	z= c*40/50 + C*60/100;
	if (x<y){if (y<z){printf("%.2f",y);}
	else {printf("%.2f",z);}}
	else {if(x<z){printf("%.2f",x);} else {if (y<z){printf("%.2f",y);}
	else {printf("%.2f",z);} }
	return 0; }