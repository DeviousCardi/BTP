#include <stdio.h>
#include <stdlib.h>
int main() {
int ti;
float a,b,c,t,p,m;
scanf("%d",&ti);
if(ti<=200000)
printf("0.00");
if(ti<=500000&&ti>200000)
{a=(ti-200000);
t=(float)(a/10);
printf("%.2f",t); }
if(ti<=1000000&&ti>500000)
{b=(ti-500000);
p=(float)(((b*20)/100)+30000);
printf("%.2f",p); }
if(ti>1000000)
{c=(ti-1000000);
m=(float)(130000+((c*30)/100));
printf("%.2f",m); }
	return 0; }