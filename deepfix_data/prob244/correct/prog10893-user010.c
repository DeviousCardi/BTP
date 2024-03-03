#include <stdio.h>
#include <stdlib.h>
int main() {
	int am;
	float t;
	scanf("%d",&am);
	if(am<200000){
	    printf("%.2f",t=0); }
	else if(200001<am&&am<500000)
	   { t=0.1*am;
	    printf("%.2f",t); }
	else if(500001<am&&am<100000)
	{	t=30000+.2*am;
	    printf("%.2f",t); }
	else if(am>1000000)
	{ t=130000+.3*am;
	printf("%.2f",t); }
	return 0; }