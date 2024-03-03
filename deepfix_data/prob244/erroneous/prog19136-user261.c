#include <stdio.h>
#include <stdlib.h>
int main {
	int amt;
	float tax;
	scanf("%d",&amt);
	if(amt<=200000)
	tax=0;
	else if(amt>=200001 && amt<=500000)
	tax=0.1*(amt-200000);
    else if(amt>=500001 && amt<=1000000)
	tax=0.2*(amt-500000)+30000;
	else
	tax=0.3*(amt-200000)+130000;
	printf("%.2f",tax);
	return 0; }