#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=(n+1);i=i+1){
	    for(j=i;j<=n;j++){
	        printf(" "); }
	    for(k=i;k>0;k--){
	        if((i+j+k-2)%2==1)
	            printf("*");
	        else
	            printf("x"); }
	    printf("\n"); }
		for(i=n+1;i>0;i=i-1){
	    for(j=i;j<=n;j++){
	        printf(" "); }
	    for(k=i;k>0;k--){
	        if((i+j+k-2)%2==1)
	            printf("*");
	        else
	            printf("x"); }
	    printf("\n"); }
	return 0; }