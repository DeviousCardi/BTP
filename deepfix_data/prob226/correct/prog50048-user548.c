#include <stdio.h>
int main() {
	int d,n,i,sum=0,ans=0,x,j,k;
	scanf("%d %d",&d,&n);
	int a[n];
	for(i=0;i<d;i++) {
	    scanf("%d",&a[i]); }
	for(j=0;j<d;j++) {
	       sum=sum+a[j]; }
	   if(n>d) {
	       for(k=0;k<n;k++) {
	           ans=sum; }
	       for(k=d+1;k<n;k++) {
	           ans=ans - a[k-d-1]; } }
	   else {
	     for(k=0;k<n;k++) {
	         ans=ans + a[k]; } }
	   printf("%d",ans);
	return 0; }