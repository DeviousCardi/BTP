#include <stdio.h>
#include <stdlib.h>
int main() {
	int amt;
	float t=0;
	scanf("%d",&amt);
	if(amt<=200000)
	{t=0;}
	else if(amt>200000&&amt<500001)
	{t=0.1*(amt-200000);}
    else if(amt>500000&&amt<1000001)
	{t=0.2*(amt-200000)+30000;}
	else
	{t=0.3*(amt-200000)+130000;}
	printf("%.2f",t);
	return 0; }