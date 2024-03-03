#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti,tax;
	scanf("%d",&ti);
	if(ti<=200000)
	tax=0;
	else
	if(ti>200000&&ti<=500000)
	tax=(ti*10)/100;
	else
	if(ti>500000&&ti<=1000000)
	tax=((ti*20)/100)+30000;
	else
	if(ti>1000000)
	tax=((ti*30)/100)+130000;
    printf("%d",tax);
	return 0; }