#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a,i,j,k,l[10000],c,d;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    scanf("%d",int l[i]); }
	scanf("%d",int a);
	for(j=1;j<=n;j++) {
	 for(k=1;k<=n;k++) {
	     if(l[j]==a-l[k]) {
	         c=l[j]; d=l[k]; } } }
	printf("%d , %d",c,d);
	return 0; }