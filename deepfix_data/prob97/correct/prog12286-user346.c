#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=n;i++){
	    for(k=n;k>i;k--){
	        printf(" "); }
	    for(j=1;j<=(i*2)-1;j=j+1){
	        printf("%d",i%10); }
	    printf("\n"); }
	return 0; }