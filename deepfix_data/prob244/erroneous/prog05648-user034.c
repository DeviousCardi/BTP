#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	float tax;
	scanf("%d",&ti);
	if(ti<=200000){
	    tax=0; }
	else if(ti<=500000){
	    tax=(ti-200000)/10; }
	else if(ti<=1000000){
	    tax=30000+(ti-500000)/5; }
	else{
	    tax=130000+(ti-1000000)*3/10 }
	printf("%.3f",tax);
	return 0; }