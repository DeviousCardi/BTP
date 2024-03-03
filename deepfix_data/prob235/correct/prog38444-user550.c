#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d",&h);
	int i,j,k,l;
	int n=h/2+1;
	for(i=0;i<n;i++) {
	    for(k=n-1-i;k>0;k--)
	    printf(" ");
	    for(j=n-i;j<=n+i;j++)
	    printf("%d",j%10);
	    printf("\n"); }
	for(l=2;l<=n;l++) {
	    for(k=0;k<l-1;k++)
	    printf(" ");
	    for(j=l;j<=n*2-l;j++)
	    printf("%d",j%10);
	    printf("\n"); }
	return 0; }