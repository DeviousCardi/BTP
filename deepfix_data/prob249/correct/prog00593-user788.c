#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    if(i<=(n-1)/2){
	    for(j=(n-i);j>=0;j--){
	        printf(" ");}
	        printf("*");}
	    else{for(k=1;k<=(n-1)/2;k++){
	        printf(" ");} }
	    printf("\n"); }
	return 0; }