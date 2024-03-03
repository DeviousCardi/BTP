#include <stdio.h>
int main() {
	int ti;
	if (ti=<200000)
	printf("0");
	else if(ti>=2000001 & ti=<500000) {
	    float a;
	    a=0.1*ti;
	    printf("%0.2f",a);}
	    else if(ti>=500001 & ti=<1000000)
	    {float b;
	    b=30000 + 0.2*ti;
	    printf("%0.2f",b);}
	    else if(ti>1000000)
	    {float c;
	    b=130000 + 0.3*ti;
	    printf("%0.2f",c);}
	return 0; }