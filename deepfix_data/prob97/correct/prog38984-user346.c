#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=n,k=0;i>0;i--,k++){
	    for(j=i;j<=n+k;j++){
	            printf("%d",j%10); }
	    printf("\n"); }
	return 0; }