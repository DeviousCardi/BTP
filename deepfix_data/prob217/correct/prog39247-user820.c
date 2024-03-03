#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<=n-1;i++) {
	    scanf("%d",&a[i]); }
	int s;
	scanf("%d",&s);
	for(i=0;i<=n-2;i++) {
	    for(j=1;j<=n-1;j++) {
	    if(a[i]+a[j]==s) {
	        printf("(%d,%d)\n",a[i],a[j]); } } }
	return 0; }