#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++){
	    for(j=n;j>0;j--){
	        printf(" ");
	        for(k=j;k<=n+i;k++){
	            printf("%d",k%10); }
	    }printf("\n"); }
	return 0; }