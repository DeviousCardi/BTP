#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n,t;
	scanf("%d",&n);
	for(k=1;k<=2*n-1;k++)
	printf("*");
	printf("\n");
	for(i=1;i<=n-2;i++) { {
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
	  j=j+1;} } }
	printf("\n);
	for(t=1;t<=n-1;t++)
	{printf(" ");}
	printf("*");
	while(t<=2*n-1)
	{printf(" ");
	t=t+1;}
	return 0; }