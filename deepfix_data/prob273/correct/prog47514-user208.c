#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
	    if (i<=(n+1)/2){
	    for (j=0;j<i;j++){
	       printf("%d",j+1); } }
	    printf("\n"); }
	return 0; }