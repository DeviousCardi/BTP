#include <stdio.h>
#include <stdlib.h>
int main() {
    float a,b;
	scanf("%f",&a);
    	if(a<=200000)
      	    b=0;
	    else if(a>=200001 || a<=500000)
	           b=(a-200000)*.1;
	     else if(a>=500001 || a<=1000000)
	         b=30000+((a-500000)*.2);
	     else if(a>=1000000)
	         b=130000+((a-1000000)*.3);
printf("%.2f",b);
	return 0; }