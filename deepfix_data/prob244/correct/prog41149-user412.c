#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	float a,b,c;
	scanf("%d",&ti);
	a=(10.0/1000)*(ti-200000);
	b=30000+(20.0/100)*(ti-500000);
	c=130000+(30.0/100)*(ti-1000000);
	if(ti<=200000){
	    printf("%.2f\n",0.00);
	}else if(200001<=ti&&ti<=500000){
	    printf("%.2f\n",a);
	}else if(500001<=ti&&ti<=1000000){
	    printf("%.2f\n",b);
	}else if(ti>1000000){
	    printf("%.2f\n",c); }
	return 0; }