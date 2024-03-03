#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	scanf("%d",&ti);
if(ti<=1000000){if(ti<=500000)
{if(ti<=200000){printf("%.2f",0.0);}
else{printf("%.2f",.1*(ti-500000));}}
else{printf("%.2f",30000+.2*(ti-500000));}}
else{printf("%.2f",130000+.3*(ti-1000000));}
	return 0; }