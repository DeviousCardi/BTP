#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	int a=1;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	        for(j=n;j>0;j=j-2) {
	                if(n!=j) {
	                        for(k=0;k<a;k++) {
	                            printf(" "); }
	                   a=a+1; }
	            printf("\n");
	return 0; }