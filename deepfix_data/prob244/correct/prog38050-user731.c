#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	scanf("%d",&ti);
	float tax;
	if (ti<=200000)
	tax=0;
	else if((ti>200001)&&(ti<=500000)) {
	    tax=(((ti-200000))*10)/100; }
	else if((ti>500000)&&(ti<=1000000)) {
	    tax=30000+(((ti-500000)*20)/100); }
	else tax=130000+(((ti-1000000)*30)/100);
	printf("%0.2f",tax);
	return 0; }