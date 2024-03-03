#include <stdio.h>
#include <stdlib.h>
int main() {
		int n;
	scanf("%d",&n);
	int i,j;
	i=1;
	j=1;
	for (i=1;i<=n;i++){
	    if(i<n-1){
	         for (j=1;j<=((2*n)-1);j++) {
	        if(i+j==n+1){
	        printf("*"); }
	   else if(j-i==n-2){
	       printf("*"); }
	   break; } } }
	return 0; }