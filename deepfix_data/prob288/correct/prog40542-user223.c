#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n+1;i++) {
	    for(j=1;j<=n+1-i;j++) {
	        printf(" "); }
	    for(;j<n+1;j++){
	        if((i+j)%2==0){printf("*");}
	        else{printf("X");}
	        printf("\n"); } }
	for(i=n;i>=0;i--) {
	     for(j=1;j<=n+1-i;j++)
	    {printf(" "); }
	    for(;j<n+1;j++){
	        if((i+j)%2==0){printf("*");}
	        else{printf("X");}
	        printf("\n"); } }
	return 0; }