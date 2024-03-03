#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	scanf("%d",&ti);
	float f;
	if(ti<=200000)
	    f=0;
	else if(ti>200000 && ti<=500000)
	    f=.1*(ti-200000);
	else if(ti>500000 && ti<=1000000)
	    f=.2*(ti-500000)+30000;
	else
	    f=.3*(ti-200000)+130000;
	printf("%.2f",f);
	return 0; }