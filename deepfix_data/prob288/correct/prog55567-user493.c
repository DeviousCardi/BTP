#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1){
	    for(j=i;j<=n;j++){
	    printf(" "); }
	    for(k=i;k>0;k=k+1){
	        printf("x"); }
	    printf("\n"); }
	return 0; }