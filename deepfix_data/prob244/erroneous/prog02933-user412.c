#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	scanf("%d",&ti);
	if(ti<=200000){
	    printf("%.2f",0);
	}else if(200001<=ti<=500000){
	    printf("%.2f",10%%(ti-200000));
	}else if(500001<=ti<=1000000){
	    printf("%.2f",30000+20%%(ti-500000));
	}else if(ti>1000000){
	    printf("%.2f",130000+30%%(ti-1000000)); }
	return 0; }