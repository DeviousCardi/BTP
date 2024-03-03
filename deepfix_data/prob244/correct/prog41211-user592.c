#include <stdio.h>
#include <stdlib.h>
int main() {
	float t;
	scanf("%f",&t);
	if(t<=200000)
	{printf("%f",t=0);}
	else if ((t>=200001)&&(t<=500000)){
	    printf("%f",t/10);}
	    else if ((t>=500001)&&(t<=1000000)){
	        printf("%f",30000+(t/5));}
	  else if(t>1000000) { printf("%f",130000+(3*t/10));}
	return 0; }