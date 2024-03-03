#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,a[500],b[500],sum[501],s[501],i,j,k=499,e,r=0,q;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=499;i>=500-n;i--) {
	    scanf("%d",&a[i]); }
	for(j=499;j>=500-m;j--) {
	    scanf("%d",&b[j]); }
	if(n>m) {
	    e=n; }
	else {
	       e=m; }
	while(k>=500-e) {
	    sum[k]=r+a[k]+b[k];
	    if(sum[k]>9) {
	        s[k]=sum[k]%10;
	        r=sum[k]/10; }
	    k--; }
	for(q=500-e;q<500;q++) {
	    printf("%d",s[q]); }
	return 0; }