#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,h,l,b;
	scanf("%d%d",&h,&b);
	for(i=1;i<=h;i++)  {
	    l=i;
	    for(k=1;k>i;k++)             {
	 printf(" ");
	    for(j=i;j<=b-(2*h)+(3*i)-2;j++)     {
	     if(j>=10)
	    printf("%d",l%10);
	    l++;  }
	    printf("\n"); } }
	return 0; }