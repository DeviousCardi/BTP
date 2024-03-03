#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,k;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
	    if(i<n) {
	         for (j=1;j<=((2*n)-1);j++) {
	        if(i+j==n+1) {
	            printf("*"); }
	        else if(j-i==n-1) {
	            printf("*"); }
	   	    else {
	   	        printf(" "); } }
	      printf("\n"); }
	    else if (i=n) {
	        for(k=1;k<=((2*n)-1);k++) {
	            printf("*"); } } }
	return 0; }