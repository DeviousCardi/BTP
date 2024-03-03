#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)    {
	    for(j=0;j<n-1-i;j++)  {printf(" ");}
	    for(k=0;k<(2*i-1);k++)  {printf("%c",'*');}
	    printf("\n"); }
	return 0; }