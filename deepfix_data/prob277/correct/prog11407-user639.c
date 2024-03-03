#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,h,i,j,k;
	scanf("%d",&h);
	scanf("%d",&n);
	for (i=h;i<=h;i--){
	 k=i;
	 for(j=n;j<i;j--)
	 printf("*");
	 for(j=n;j<=n+2-(2*i);j--,k++)
	 printf("%d",k%10);
	 printf("\n"); }
	return 0; }