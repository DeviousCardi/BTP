#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
	    for(j=1;j<=i;j++){
	    printf("*");}
	    printf("/n");
	    for(j=i;j<n+1-(2*i);j++){
	        printf(" "); } }
	return 0; }