#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,a,k,n;
	a=1;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=1;i<=n;i++){
	    for(j=i;j<=n-1;j++){
	        printf(" "); }
	    for(j=1;j<=k-2*n;j++){
	        if(a>=10){a=a%10;}
	        printf("%d",a);
	        a++; }
	    printf("\n"); }
	return 0; }