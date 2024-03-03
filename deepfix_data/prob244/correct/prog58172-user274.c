#include <stdio.h>
#include <stdlib.h>
int main() {
	int t;
	scanf("%d",&t);
	if(t<=200000){printf("0.00");}
	 if(t>200000&&t<=500000){printf("%.2f",(t-200000)/10.0);}
	 if(t>500000&&t<=1000000){printf("%.2f",30000+((t-500000)/5));}
	return 0; }