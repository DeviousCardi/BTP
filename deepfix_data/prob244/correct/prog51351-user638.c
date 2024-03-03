#include <stdio.h>
#include <stdlib.h>
int main() {
	float ti,tax;
	scanf("%f",&ti);
	if(ti<=200000)
	tax=0;
	else if(ti<=500000)
	tax=0.1*(ti-200000);
	else if(ti<=1000000)
	tax=30000+(0.2*(ti-500000));
	else
	tax=130000+(0.3*(ti-1000000));
	printf("%f",tax);
	return 0; }