#include <stdio.h>
#include <stdlib.h>
int main() {
	int income;
	scanf("%d",&income);
	float tax;
	if(income<=200000) {
	    tax = 0; }
	else if (income<=500000) {
	    tax = (income - 500000)/10.0 ; }
	else if (income <= 1000000 ) {
	    tax = (income - 500000)/5.0	 + 30000; }
	else {
	    tax = 130000 + (income - 1000000)*(0.3); }
	printf("%.2f",tax);
	return 0; }