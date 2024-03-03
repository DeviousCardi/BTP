#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i ,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    printf("%(i-1)c",'*');
	    for(j=1;j<=(n+1)/2;j++){
	        printf("\t"); }
	    printf("*\n"); }
	return 0; }