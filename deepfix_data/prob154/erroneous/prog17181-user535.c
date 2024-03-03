#include <stdio.h>
#include <stdlib.h>
int main() {
	double soi,eoi,area;
	int num,x=0,funct,i;
	scanf("%lf",&soi);
	scanf("%lf",&eoi);
	scanf("%d",&num);
	if (x<=-1)
	 funct=1;
	else if (-1<x && x<1)
	 funct=x*x;
	else
	 funct=x*x*x;
	for(i=0;i<((eoi-soi)/num));i++)
	area=((eoi-soi)/num)*i;
	printf("%lf",area);
	return 0; }