#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti,a;
	scanf("%d",ti);
	scanf("%d",a);
	if (a<=200000)
	{printf("%d",0);}
	if ((a>=200001)&&(a<=500000))
	{printf("%d",0.1*ti);}
	if ((a>=500001)&&(a<=1000000))
	{printf("%d",30000+(0.1*ti));}
	return 0; }