#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,h,l,b;
	scanf("%d%d",&h,&b);
	for(i=1;i<=h;i++)  {
	    l=i;
	    for(k=1;k>i;k++)             {
	    printf(" ");
	    for(j=1;j<=b-(2*h)+(3*i)-2;j++)     {
	    printf("%d",l%10);}
	    l++;
	    printf("\n"); } }
	return 0; }