#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;float tax;
	scanf("%d",&ti);
	if(ti<=20000)
	 tax=0;
	else
	if(ti<=500000)
	tax=0.1*(ti-20000);
	else
	if(ti<=1000000)
	tax=30000+0.2*(ti-500000);
	else
	tax=130000+0.3*(ti-1000000);
	return 0; }