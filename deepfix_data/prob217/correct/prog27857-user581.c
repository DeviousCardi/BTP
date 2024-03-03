#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a[10],k,j,s;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[n]); }
	scanf("%d\n",&s);
	for(k=0;k<n;k++) {
	for(j=n;j>0;j--) {
	    if ((s==(a[j]+a[k])) && a[j]!=a[k]){
	 printf("(%d,%d)",a[k],a[j]); }
	  continue; } }
	return 0; }