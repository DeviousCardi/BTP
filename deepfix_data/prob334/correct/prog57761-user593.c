#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h,l,b,H,k;
	scanf("%d%d",&h,&b);
	H=h;
	for(i=1;i<=h;i++)  {
	    l=i;
	    for(j=i;j<=b-(2*h)+(3*i)-1;j++)     {
        for(k=j;k<H-1;k++)
            printf(" ");
       H--;
	    printf("%d",l%10);
	    l++; }
	    printf("\n"); }
	return 0; }