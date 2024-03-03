#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,j,k;
	scanf("%d",&a);
	for(i=1;i<=a;i=i+1) {
	for(k=0;k<=abs(((a+1)/2)-i);k=k+1)
	{printf(" ");}
	for(j=k+1;j<=(a+1)/2;j=j+1)
	{printf("%d",j);}
	printf("\n"); }
	return 0; }