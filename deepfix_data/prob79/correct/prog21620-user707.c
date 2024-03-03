#include <stdio.h>
#include <stdlib.h>
int sum(int a[100],int i) {
    int j,isum=0;
    for(j=0;j<=i;j++) {
        isum=isum+a[j]; }
    return isum; }
int main() {
	int n,i,isum,tsum=0;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    tsum=tsum+a[i]; }
	for(i=0;i<n;i++) {
	  isum=sum(a,i);
	  if((tsum>2*isum)&&(tsum<2*(isum+a[i])))
	  printf("%d %d",i,n-i); }
	return 0; }