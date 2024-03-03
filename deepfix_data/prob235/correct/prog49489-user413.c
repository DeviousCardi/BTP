#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    for(j=1;j<=n;j++) {
	        if((j-i)%2==0&&j==(n/2)+1) {
	            printf("%d",j); }
	        else {
	            printf(" "); } }
	    printf("\n"); }
	return 0; }