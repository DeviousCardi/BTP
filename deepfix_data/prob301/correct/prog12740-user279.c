#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k=0,max=0;
	scanf("%d",&n);
	int a[10000];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++) {
	       if(a[i]==a[j])
	       k++;
	       else continue; }
	    max=k;
	    a[i]=max; }
	printf("%d",a[i]);
	return 0; }