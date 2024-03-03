#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<n;i++){
	    for(j=1;j<=2*n-1;j++){
	        if(j==(n+1)-i||j==(n-1)+i){
	            printf("*"); }
	        else if(j>=(n+2)-i||j<=(n-2)+i){
	            printf("c"); } }
	    printf("\n"); }
	for(i=n;i<=n;i++) {
	    for(j=1;j<=(2*n-1);j++){
	        printf("*"); } }
	return 0; }