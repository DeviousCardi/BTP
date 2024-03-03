#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<(n+1)/2;i++) {
	    k=(n+1)/2-(i+1);
	    for(j=0;j<k;j++)
	        printf(" ");
	    for(j=0;j<(2*i)+1);j++) {
	        printf("%d",k);
	        k++; }
	    printf("\n"); }
	for(i=1;i<(n+1)/2;i++) {
	    k=i+1;
	    for(j=0;j<i;j++)
	        printf(" ");
	    for(j=1;j<=n-2*i;j++) {
	        printf("%d",k);
	        k++; }
	    printf("\n"); }
	for(i=n;i--)
	    for(j=1;j<=(2*n)+1;j++)
	       for()
	return 0; }