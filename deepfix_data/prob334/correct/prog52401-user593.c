#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h,l,b;
	scanf("%d%d",&h,&b);
	for(i=1;i<=h;i++)  {
	    l=i;
	    for(j=1;j>i;j++)   {
	    printf(" ");
	    for(j=1;j<=b-(2*(h-1));j++)     {
	    printf("%d",l%10);
	    l++;    }
	    printf("\n");} }
	return 0; }