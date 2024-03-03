#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1; i<=n; i++)   {
	    for(j=1; j<=i; j++)   {
	        for(k=n; k>=2; k--)  {
	            printf("%c",' '); }
	        printf("%c",'*'); }
	    printf("\n"); }
	return 0; }