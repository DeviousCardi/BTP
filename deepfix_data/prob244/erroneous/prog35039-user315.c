#include <stdio.h>
#include <stdlib.h>
int main() {
	float ti
	scanf("%f",&ti)
	if (ti<=200000) {printf("%f",0);}
	else if (ti>=200001&&ti<=500000)
	    {printf("%f",0.1*(ti-200000));}
	else if (ti>=500001&&ti<=1000000)
	    {printf("%f",30000+0.2*(ti-500000));}
    else if (ti>=1000001)
	    {printf("%f",130000+0.3*(ti-1000000));}
	return 0; }