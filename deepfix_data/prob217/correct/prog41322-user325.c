#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a,i,j,k,l[10000],c,d,m,h[10000],t[10000];
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    scanf("%d",&l[i]); }
	scanf("%d",&a);
	for(j=(n/2)+1;j<=n;j++) {
	 for(k=1;k<=n/2;k++) {
	     if(l[j]==a-l[k]) {
	         for(m=1;m<=j;m++) {
	             h[m]=l[j];
	             t[m]=l[k];
	             printf("(%d,%d)\n",h[m],t[m]); } } } }
	return 0; }