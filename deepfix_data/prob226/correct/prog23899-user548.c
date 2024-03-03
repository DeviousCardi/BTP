#include <stdio.h>
int main() {
	int d,n,i,sum=0,ans=0,x,j,k,an;
	scanf("%d %d",&d,&n);
	int a[n];
	for(i=0;i<d;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<d;i++) {
	       sum=sum+a[i]; }
	   if(n>d) {
	       ans=sum;
	       for(j=d;j<n;j++) {
	           ans=ans + sum; } }
	   else {
	     for(k=0;k<n;k++) {
	         ans=ans + a[k]; } }
	   printf("%d",ans);
	return 0; }