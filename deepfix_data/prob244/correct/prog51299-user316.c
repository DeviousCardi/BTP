#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	double tax;
	scanf("%d",&ti);
	if(ti<=200000) {
	     tax=0;
	     printf("%.2lf",tax); }
	else if(ti>200000&&ti<=500000) {
	    tax=(ti-200000)/10;
	    printf("%.2lf",tax); }
	else if(ti>500000&&ti<=1000000) {
	     tax=((ti-500000)/5)+30000;
	     printf("%.2lf",tax); }
	else if(ti>1000000) {
	     tax=130000+((3*(ti-1000000))/10);
	     printf("%.2lf",tax); }
	return 0; }