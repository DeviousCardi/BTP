#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,s;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    if(i<=n/2+1)
	    s=i-1;
	    else
	    s=n-i;
	    for(k=1;k<=s;k++)
	    printf(" ");
	    for(j=1;j<=(n-s-s);j++)
	    printf("%c",'*');
	    printf("\n"); }
	return 0; }