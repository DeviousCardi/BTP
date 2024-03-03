#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d%d",&n);
	for(i=0;i<n;i++)  {
	    for(j=0;j<2*i-1;j++)    {
	        for(k=0;k<(n-j)/2;k++)  {printf(" ");}
	        printf("%c",'*'); }
	    printf("\n"); }
	return 0; }