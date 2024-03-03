#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	float tax;
	scanf("%d",&ti);
	if(ti<=200000) {
	     tax=0;
	     printf("%.2f",tax); }
	else if(ti<=500000) {
	    tax=ti/10;
	    printf("%.2f",tax); }
	else if(ti<=1000000) {
	     tax=(ti/5)+30000;
	     printf("%.2f",tax); }
	else if(ti>1000000) {
	     tax=130000+((3*ti)/10);
	     printf("%.2f",tax); }
	return 0; }