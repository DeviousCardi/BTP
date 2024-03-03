#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=5;i++) {
	    for(j=1;j<6-i;j++)
	    printf(" ");
	    for(k=6-i;k<=5;k++)
	    printf("%d\n",k%10); }
	return 0; }