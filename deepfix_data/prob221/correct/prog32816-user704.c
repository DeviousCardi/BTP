#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	for(k=1;k<=2*n-1;k++)
	printf("*");
	for(i=1;i<=n-1;i++) {
     for(j=1;j<=i;j++)
	  {printf(" ");}
	 printf("*");
	 j=j+1;
	 while(j<=2*n-i-2)
	 {printf(" ");
	 j=j+1;}
	 printf("*");
	 j=j+1;
	 while(j<=2*n-1)
	 {printf(" ");
	  j=j+1; } }
	printf("\n");
	return 0; }