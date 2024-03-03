#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j,k;
	scanf("%d",&n);
	k=(n+1)/2;
	for(i=1;i<=k;i++) {
	    for(j=1;j<=k;j++) {
	       if(j==k)
	       {printf("*");}
	       else if((i+j)==(k+1))
	       {printf("*");}
	       else
	       {printf(" ");} }
	    printf("\n"); }
    return 0; }