#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int l,z;
	l=(n%10);
	z=l;
	int i,j,k;
	for(i=1;i<=n;i++) {
	    for(k=n;k>i;k--) {
	        printf(" "); }
	    for(j=1;j<=((2*i)-1);j=j+1) {
	        printf("%d",z);
	        z++; }
	    if(l>=0) {
	     l=l-1;
	    z=l; }
	    else
	    { l=l+9;
	    z=l; }
	    printf("\n"); }
	return 0; }