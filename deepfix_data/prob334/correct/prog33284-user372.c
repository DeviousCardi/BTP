#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,b,m,i,j;
	scanf("%d %d",&h,&b);
	for(i=1;i<=h;i++)
	{m=i;
	    for(j=h-i;j>0;j--) {
	        printf(" "); }
	    for(j=1;j<=b-(h-1)*2;j++) {
	        printf("%d",m);
	        m=m+1; } }
	return 0; }