#include <stdio.h>
#include <stdlib.h>
int main() {
	int amount;
	float tax;
	scanf("%d%lf",&amount,&tax);
	if(amount<=200000) {
	    printf("0.00",tax); }
	else if((amount>=200001)&&(amount<=500000)) {
	    printf("%0.2f",tax=0.1*(amount-200000)); }
	else if((amount>=500001)&&(amount<=1000000)) {
	    printf("%0.2f",tax=30000+0.2*(amount-500000)); }
	else if(amount>1000000) {
	    printf("%0.2f",tax=130000+0.3*(amount-1000000)); }
	return 0; }