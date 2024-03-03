#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	scanf("%d",&ti);
	if (ti<=200000) printf("0.00");
	else if(ti<=500000) printf("%.2f",0.1*(ti-200000));
	else if(ti<=1000000) printf("%.2f",30000+0.2*(ti-500000));
	else printf("%.2f",130000+0.3*(ti-1000000));
	return 0; }