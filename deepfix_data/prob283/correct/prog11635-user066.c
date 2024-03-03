#include <stdio.h>
#include <stdlib.h>
int A(int m,int n) {
 if(m==0)
 return n+1;
 else if((m>0)&&(n==0))
 return A((m-1),1);
 else if((m>0)&&(n>0))
 return A((m-1),A(m,n-1)); }
int main() {
	int k;
	int m=3,n=5,i,j;
	scanf("%d",&k);
	int l=0;
	for(i=0;i<=m;i++) {
	    for(j=0;j<=n;j++) {
	        if(k==A(i,j)) {
	            printf("%d %d",i,j);
	            exit (0); } } }
	    	printf("-1");
	return 0; }