#include <stdio.h>
#include <stdlib.h>
int main() {
	int amount;
	float tax;
	scanf("%d%lf",&amount,&tax);
	if(amount<=200000) {
	    printf("0",tax); }
	else if((amount>=200001)&&(amount<=500000)) {
	    printf("%0.2f",tax=0.1*(amount-200000)); }
	return 0; }