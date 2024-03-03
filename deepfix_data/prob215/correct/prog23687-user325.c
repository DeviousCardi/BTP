#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,n,i,j,l[10];
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    a=(n%i);
	    if(a==0) {
	        for(j=1;j<=n;j++) {
	            l[j]=a; } } }
 printf("%d",l[j]);
	return 0; }