#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,p;
	int k=(n+1)/2;
	for(i=1;i<=k;i=i+1){
	    for(j=1;j<i;j=j+1){
	        printf(" "); }
	    for(p=1;p<=n-2*i;p=p+1){
	        printf("%c",'*'); }
	    printf("\n"); }
	return 0; }