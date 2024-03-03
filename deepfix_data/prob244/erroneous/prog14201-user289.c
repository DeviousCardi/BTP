#include <stdio.h>
#include <stdlib.h>
int main() {
	float a;
	scanf("%f",&a);
	if(a<=200000)
	printf("0.00");
	else
	if((200001<=a)&&(a<=500000))
	printf("%.2f",(a-200000)%%10);
	else
	if((500001<=a)&&(a<=1000000))
	printf("%.2f",30000+(20%%(a-500000.0)));
	else
	if(a>=1000001)
	printf("%.2f",130000+30%%(a-1000000.0));
	return 0; }