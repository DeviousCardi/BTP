#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k,s;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    if(i<=n/2+1)
	    s=n/2+1-i;
	    else
	    s=i-n/2-1;
	    for(k=1;k<=s;k++)
	    printf(" ");
	    for(;k<=(n/2+1);k++)
	    printf("%d",k%10);
	    printf("\n"); }
	return 0; }