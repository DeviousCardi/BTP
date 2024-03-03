#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	int a=1;
	scanf("%d",&n);
	int b=n;
	for(i=0;i<(n+1)/2;i++) {
	         if(i!=1) {
	                for(k=0;k<a;k++) {
	                     printf(" "); } }
	        for(j=b;j>0;j--) {
	               printf("*"); }
	            b=b-2;
	            printf("\n");
	              a=a+1; }
	return 0; }