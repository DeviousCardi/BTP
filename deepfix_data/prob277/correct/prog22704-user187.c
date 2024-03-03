#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	int a=1;
	int b=n;
	scanf("%d",&n);
	for(i=0;i<(n+1)/2;i++) {
	        for(j=b;j>0;j--) {
	                if(b!=j) {
	                        for(k=0;k<a;k++) {
	                            printf(" "); } }
	             printf("*");
	            b=b-2; }
	            printf("\n");
	              a=a+1; }
	return 0; }