#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i+1;i<=n;i=i+1) {
	 for(j=n-1;j>0;j=j-1)
	 {printf(" ");}
	 for(j=n+1-i;j<=n;j=j+1)
	 {printf("%d",j);}
	 printf("\n");}
	return 0; }