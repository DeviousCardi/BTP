#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	scanf("%d",&a);
	if (a<=200000)
	    printf("0.00");
	float t2;
	t2=(a-200000)*(0.1);
	if((a>200000)&&(a<=500000))
	    printf("%.2f",t2);
	float t3;
	t3=30000+(0.2*(a-500000));
	if((a<=1000000)&&(a>500000))
	printf("%.2f",t3);
	return 0; }