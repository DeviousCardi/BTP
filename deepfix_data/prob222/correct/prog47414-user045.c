#include <stdio.h>
int main() {
	float a1,a2,a3,b1,b2,b3;
	scanf("%f %f %f",&a1,&a2,&a3);
	scanf("%f %f %f",&b1,&b2,&b3);
	float k1=0.0,k2=0.0,k3=0.0;
	k1=(a1*40/50)+(b1*60/100);
	k2=(a2*40/50)+(b2*60/100);
	k3=(a3*40/50)+(b3*60/100);
	float max=0.0,min=0.0,mid=0.0;
	if((k1==k2)||(k1==k3)||(k2==k3)) {
	    if((k1==k2)||(k1==k3))
	   { mid=k1; }
	    else
	    if(k2==k3)
	    {mid=k2; }
printf("Median weighted score=%.2f",mid); }
	    else {
	        if(k1>k2) {
	    max=k1;
	    min=k2;
	    mid=k3; }
	    else {
	        max=k2;
	        min=k1;
	        mid=k3;}
	        if(max<k3) {
	        max=k3;
	        mid=k1;}
	    if(min>k3)
	    {min=k3;
	    mid=k2;}
	    printf("Median weighted score=%.2f",mid);}
	return 0; }