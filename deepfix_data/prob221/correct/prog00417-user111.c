#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(j=1;j<=2*n-1;j++){
	        printf("*"); }
	    printf("\n");
	    for(i=2;i<=n-1;i++){
	    for(k=1;k<i;k++){
	        printf(" "); }
	    printf("*");
	    for(k=i+1;k<2*n-i;k++){
	        printf(" "); }
	    printf("*\n");
	    for(j=1;j<n-1;j++){
	        printf(" "); }
	    printf("*"); }
	return 0; }