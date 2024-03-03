#include <stdio.h>
#include <stdlib.h>
int main() {
    int ti;
    float tax;
    scanf("%d",&ti);
    if(ti<=200000)
    {tax=0;
    printf("%f",tax);}
    else if((ti>200000)&&(ti<=500000))
    {tax=0.1*(ti-200000);
    printf("%f",tax);}
	else if((ti>500000)&&(ti<=1000000))
	{tax=30000+0.2*(ti-500000);
	printf("%f",tax);}
	else if(ti>1000000)
	{tax=130000+0.3*(ti-1000000);
	    printf("%f",tax);}
	return 0; }