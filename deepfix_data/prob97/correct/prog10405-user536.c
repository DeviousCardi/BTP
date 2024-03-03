#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n%10;i=i+1) {
	 for(j=n%10-i;j>0;j=j-1)
	 {printf(" ");}
	 for(j=n%10+1-i;j<=n%10;j=j+1)
	 {printf("%d",j%9);}
	 printf("\n");}
	return 0; }