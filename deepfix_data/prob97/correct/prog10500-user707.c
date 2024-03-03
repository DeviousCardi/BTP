#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,l;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1) {
	    for(j=1;j<=(n-i);j=j+1) {
	        printf(" "); }
	    for(k=n-i+1;k<=(n+i-1);k=k+1) {
	        printf("%d",k%10); }
	    if(i<n) {
	    printf("\n"); }
	    else
	    break; }
	 return 0; }