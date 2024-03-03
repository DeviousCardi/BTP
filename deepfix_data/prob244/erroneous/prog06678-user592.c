#include <stdio.h>
#include <stdlib.h>
int main() {
	float t;
	scanf("%f",&t);
	if(t<=200000)
	{printf("%.2f",t=0);}
	else if ((t>=200001)&&(t<=500000)){
	    printf("%.2f",((t-200000)/10);}
	    else if ((t>=500001)&&(t<=1000000)){
	        printf("%.2f",30000+((t-500000)/5));}
	  else if(t>1000000) { printf("%.2f",130000+(3*(t-1000000)/10));}
	return 0; }