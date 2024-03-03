#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,b,i,j,k;
	scanf("%d%d",&h,&b);
	for (i=1;i<=h;i++) {
	    for (j=1;j<=h-i;j++)
	    {printf (" ")};
	    for (k=1;k<=b-2*(h-i)) {
	        if (k<=9) printf("%d",k);
	        else printf("%d",k%10); }
	    printf("\n"); }
	return 0; }