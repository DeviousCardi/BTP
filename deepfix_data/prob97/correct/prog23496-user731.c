#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int l,z;
	l=(n%10);
	z=l;
	int p=(n/10);
	int i,j,k;
	for(i=1;i<=n;i++) {
	    for(k=n;k>i;k--) {
	        printf(" "); }
	    for(j=1;j<=((2*i)-1);j=j+1) {
	        printf("%d",z);
	        z=(z+1)%10; }
	    if(l>0) {
	     l=l-1;
	     z=l; }
	     else {
	         l=l-1;
	         z=l+(p*10); }
	    printf("\n"); }
	return 0; }