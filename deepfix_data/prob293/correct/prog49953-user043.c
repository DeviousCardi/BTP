#include <stdio.h>
#include <stdlib.h>
int main() {
	         int a,b,c;
	         scanf("%d%d%d",&a,&b,&c);
	         int d,e,f;
	         d=a*a;
	         e=b*b;
	         f=c*c;
	         if((a>(b+c))||(b>(a+c))||(c>(a+b)))
	            { if((d>(e+f))||(e>(d+f))||(f>(d+e)))
	                printf("Obtuse Triangle");
	               else
	                printf("Not Obtuse Triangle"); }
	         else
	             printf("Cannot form a Triangle");
	  	return 0; }