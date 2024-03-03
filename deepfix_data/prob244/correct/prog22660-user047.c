#include <stdio.h>
#include <math.h>
int main() {
	       int a;
	       float x;
	       scanf("%d",&a);
	       if(a<=200000)
	       x=0;
	       else if(a>=200001 && a<=500000)
	       x=(0.1*200000.0);
	       else if(a>=500001 && a<=1000000)
	       x=(30000+(0.2*500000.0));
	       else
	       x=(130000+(0.3*1000000.0));
	       printf("%.2f",x);
	return 0; }