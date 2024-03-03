#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a,i,j;
	scanf("%d",&n);
	a=2*n+1;
	for(i=1;i<=a;i++) {
	    for(j=i;j<=i;j++) {
	        if(j%2==0)
	        printf("x");
	        else
	        printf("*"); } }
	return 0; }