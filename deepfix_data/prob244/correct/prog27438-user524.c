#include <stdio.h>
#include <stdlib.h>
int main() {
    float a,b,c,d;
	scanf("%f",&a);
    	if(a<=200000)
      	printf("0.00");
	    else if(a>=200001 || a<=500000) {
	           b=(a-200000)*.1;
	           printf("%.2f",b); }
	     else if(a>=500001 || a<=1000000) {
	         c=(a-5000000)*.2;
	         printf("%.2",c); }
	     else if(a>=1000000) {
	         d=(a-1000000)*.3;
	         printf("%.2",d); }
	return 0; }