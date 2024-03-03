#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,i,j,h,k,l,b;
	scanf("%d%d",&h,&b);
	for(i=1;i<=h;i++)  {
	    l=i;
	    for(j=1;j<=b-2*(h-1);j++)     {
	        x=b-2*(h-1);
	        x=x+3;
	   for(k=1;k>i;k++)   {
	   printf(" ");  }
	    printf("%d",l%10);
	    l++;    }
	    printf("\n"); }
	return 0; }