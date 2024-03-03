#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n,b;
	scanf("%d",&n);
	scanf("%d",&k);
	b=n-1;
	for(i=1;i<=n;i++){
	    for(j=i;j<=n-1;j++){
	        printf(" "); }
	    for(j=i;j<=k-2*b;j++){
	        if(j>=10){j=j%10;}
	        printf("%d",j);
	        j++; }
	    printf("\n");
	    b--; }
	return 0; }