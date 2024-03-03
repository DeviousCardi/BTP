#include <stdio.h>
#include <stdlib.h>
int main() {
    int i=1;
	int n,j,k;int a;
	scanf("%d",&n);
	int b=n;
	for(j=1;j<=2*n-1;j++){
	        printf("*"); }
	    printf("\n");
	    for(i=2;i<=n;i++){
	    for(k=1;k<i;k++){
	        printf(" "); }
	    printf("*");
	   for(k=i+1;k<2*b-i;k++){
	        printf(" "); }
	    if(i<n){printf("*\n"); } }
	return 0; }