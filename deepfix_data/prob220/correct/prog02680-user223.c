#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1; i<=2*n-1; i++){
	    for(j=1;j<=n-1;j++){
	        if(j==(n+i)||j==(n-i)){
	            printf("*");}
	            else{printf(" ");} }
	        printf("\n"); }
	    return 0; }