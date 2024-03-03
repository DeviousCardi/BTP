#include <stdio.h>
#include <stdlib.h>
int main() {
	float ti,tax;
	scanf("%f",&ti);
	if(ti<=200000.0)
	tax=0.0;
	else if(ti<=500000.0)
	tax=.1*(ti-200000.0);
	else if(ti<=1000000.0)
	tax=30000.0+.2*(ti-500000.0);
	else
	tax=130000.0+.3*(ti-1000000.0)
	printf("%.2f",tax);
	return 0; }