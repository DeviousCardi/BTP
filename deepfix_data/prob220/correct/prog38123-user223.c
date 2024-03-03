#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1; i<=n-1; i++){
	    for(j=1; j<=n-i; j++){
	        if(j==(n+1-i)||(n+i-1)){
	            printf("*");}
	         else{
	             printf(" "); }
	if(i==n){
	    for(k=1; k<=n; k++){
	        printf("*"); } } }
	printf("\n");}
	return 0; }