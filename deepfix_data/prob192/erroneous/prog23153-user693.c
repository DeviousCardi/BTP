#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	scanf("%d",&n);
	   for(i=1;i<=n;i++) {
	        if(i<=(n+1)/2) {
	               for(j=1;j<=((n+1)/2)-i;j++) {
	                     printf(" "); }
	               for(k=1;k<=2*i-1;k++) {
	                     printf("*"); } }
	           else {
	                for(j=1;j<=i-(n+1)/2) {
	                    printf(" "); }
	                for(k=1;k<=2*(n-i)+1;k++) {
	                     printf("*"); } } }
	return 0; }