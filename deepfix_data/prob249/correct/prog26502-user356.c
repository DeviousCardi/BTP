#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	int p=(n-1)/2 +1;
	for(i=1;i<=p;i++) {
	    for(k=i;k<=(p-i);k++) {
	        printf(" "); }
	    printf("*");
	    for(k=0;k<(p-1);k++) {
	            printf(" "); }
	   printf("*");
	   printf("\n"); }
	return 0; }