#include <stdio.h>
#include <stdlib.h>
int main() {
	int amount;
	float tax;
	scanf("%d%lf",&amount,&tax);
	if(amount<=20000) {
	    printf("tax=0"); }
	else if((amount>=200001)&&(amount<=50000)) {
	    printf("%0.2f",tax=0.1*(amount-200000)); }
	return 0; }