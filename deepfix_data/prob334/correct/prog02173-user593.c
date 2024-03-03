#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h,k,l,b;
	scanf("%d%d",&h,&b);
	for(i=1;i<=h;i++)  {
	    l=i;
	    for(j=i;j<=b+i-1;j++)    {
	   for(k=1;k>i;k++)   {
	   printf(" ");  }
	    printf("%d%d",l%10,j%10);
	    l++;    }
	    printf("\n"); }
	return 0; }