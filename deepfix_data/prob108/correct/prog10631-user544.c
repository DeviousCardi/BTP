#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j;
	scanf("%d",&n);
	for(i=1;i<=(n+1)/2;i++){
	    if(i==1){
	    printf("*\n");
	    if(i==2)
	    printf("**\n");
	} else  {
	    printf("*");
	    for(j=1;j<=i-2;j++)
	    printf(" ");
	    printf("*\n"); } }
	  	for(i=(n+1)/2;i>1;i--){
	    if(i==n){
	    printf("*");
	    if(i==n-1)
	    printf("**\n");
	} else  {
	    printf("*");
	    for(j=1;j<=i-2;j++)
	    printf(" ");
	    printf("*\n"); } }
	return 0; }