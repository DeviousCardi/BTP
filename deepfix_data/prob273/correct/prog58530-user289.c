#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,j,k;
	scanf("%d",&a);
	for(i=0;i<=a;i=i+1) {
	for(k=0;k<=abs((a+1)/2)-i;k=k+1)
    {printf(" ");}
    for(j=5-i;j<=k;j=j+1)
    {printf("%1d",j);} }
	return 0; }