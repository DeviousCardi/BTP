#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	   if(i%n==1 || i%n==0) {
	       printf("*\n"); }
	    else
	    {   printf("*");
	        if(i<=(n/2)+1) {
	        for(j=1;j<=i-2;j++) {
	            printf(" "); }
	        printf("*"); }
	        else {
	            for(k=1;k<=n-i-1;k++) {
	                printf(" "); }
	            printf("*\n") } } }
	return 0; }