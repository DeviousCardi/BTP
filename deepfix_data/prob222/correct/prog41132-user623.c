#include <stdio.h>
int main()
{ float a1,a2,b1,b2,c1,c2,x;
scanf("%f%f%f%f%f%f",&a1,&b1,&c1,&a2,&b2,&c2);
float a=a1*40/50 + a2*60/100;
float b= (b1/50)*40 + (b2/100)*60;
float c= (c1/50)*40 + (c2/100)*60;
	if(((a>b)&&(a<c))||((a>c)&&(a<b)))
	x=a;
	else
	  if(((b>c)&&(b<a))||((b>a)&&(b<c)))
	  x=b;
	else
	   if(((c>b)&&(c<a))||((c>a)&&(c<b)))
	   x=c;
	else
     	if((a==b))
     	x=a;
	else
     	if((a==c))
	    x=a;
	else
     	if((c==b))
	    x=b;
	printf("Median weighted score = %.2f",x);
	return 0; }