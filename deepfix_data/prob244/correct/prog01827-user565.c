#include <stdio.h>
#include <stdlib.h>
int main() {
	int amount;
	float tax;
	scanf("%d",&amount);
	if(amount<=200000) {
	    printf("0.00"); }
	else if(amount>=200001 && amount<=500000) {
	    tax=amount*0.1;
	    printf("%.2f",tax); }
	else if(amount>=500001 && amount<=1000000) {
	    tax=30000+0.2*amount;
	    printf("%.2f",tax); }
	else if(amount>1000000) {
	  tax=130000+0.3*amount;
	  printf("%.2f",tax); }
	return 0; }