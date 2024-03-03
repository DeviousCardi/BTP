#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	float tax;
	scanf("%d %f",&ti,&tax);
	if(ti<=200000){
	    printf("%f",0.00); }
	 if(ti>=200001 && ti<=500000){
	     printf("%.2f",.1*(ti-200000)); }
	 if(ti>=500001 && ti<=1000000){
	     printf("%.2f",30000+.2*(ti-500000)); }
	 if(ti>1000000){
	     printf("%.2f",130000+.3*(ti-1000000)); }
	return 0; }