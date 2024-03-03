#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	float tax;
	scanf("%d",&ti);
	if(ti<=200000)
	{tax=0;}
	else if(ti>=200001&&ti<=500000)
	{tax=(10.0/100)*(ti-500000);}
	else if(ti>=500001&&ti<=1000000)
	{tax=(30000)+(20.0/100)*(ti-500000);}
	else
	{tax=(130000)+(30.0/100)*(ti-1000000);}
	printf("%0.2f",tax);
	return 0; }