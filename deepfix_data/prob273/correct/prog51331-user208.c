#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
	    if (i<=(n+1)/2){
	        for (j=1;j<=(n+1)/2-i;j++){
	            printf(" "); }
	    for (j=i-1;j>=0;j--){
	       printf("%d",(n+1)/2-j); } }
	    else {
	        k = n + 1 - i;
	       for (j=k-1;j>=0;j--){
	       printf("%d",(n+1)/2-j); } }
	    printf("\n"); }
	return 0; }