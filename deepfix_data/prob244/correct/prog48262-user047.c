#include <stdio.h>
#include <math.h>
int main() {
	       int a;
	       float x;
	       scanf("%d",&a);
	       if(a<=200000)
	       x=0;
	       else if(a>=200001 && a<=500000)
	       x=(0.1*(a-200000));
	       else if(a>=500001 && a<=1000000)
	       x=(30000+(0.2*(a-500000)));
	       else
	       x=(130000+0.3*(a-1000000));
	       printf("%.2f",x);
	return 0; }