#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=0; i<=n-1; i++){
	    for(j=1;j<=2*n-3;j++){
	        if(j==(n+i)||j==(n-i)){
	            printf("*");}
	            else{printf(" ");} }
	        printf("\n"); }
	    return 0; }