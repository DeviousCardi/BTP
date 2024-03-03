#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k;
	k=0;
	for(i=n;i>0;i--){
	    for(j=i;j<n+k;j++){
	            printf("%d",j%10); }
	    printf("\n");
	    k=k+1; }
	return 0; }