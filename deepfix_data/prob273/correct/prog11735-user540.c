#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k ;
	scanf("%d" ,&n);
	for(i=n+1/2;i>=1; i=i-1) {
	       for (j=1;j<=i-i;j=j+1) {
	       printf(" "); }
	       for (k=1;k<=n+1/2;k=k+1){
	           printf("%d",k%10); }
	        printf("\n"); }
	return 0; }