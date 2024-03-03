#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	scanf("%d",&ti);
	if(ti<=200000){printf("%.2f",0.0);}
	if(ti<=500000){printf("%.2f",.1*(ti-200000));}
	if(ti<=1000000){printf("%.2f",30000+.2*(ti-500000));}
	if(ti>1000000){printf("%.2f",130000+.3*(ti-1000000));}
	return 0; }