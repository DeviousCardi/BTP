#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int j;
	int median;
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  {printf("*");
	   for(j=0;j<(median-abs(median-i));j++)
	       printf("%c",'  ');
	   printf("*\n"); }
	return 0; }