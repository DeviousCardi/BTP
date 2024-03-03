#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	scanf("%d",&a);
	if (a<=200000)
	printf("%d",0);
	else if (200001<=a && a<=500000)
	printf("%d",(a-200000)*0.1);
	else if  (500001<=a && a<=1000000)
	printf("%d",3000+0.2*(a-500000));
	else if (a>=1000000)
	printf("%d",13000+0.3*(a-1000000));
	return 0; }