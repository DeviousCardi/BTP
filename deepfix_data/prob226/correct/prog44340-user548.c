#include <stdio.h>
int main() {
	int d,n,i,sum=0,ans=0,x,j,k;
	scanf("%d %d",&d,&n);
	int a[n];
	for(i=0;i<d;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<d;i++) {
	       sum=sum+a[j]; }
	   if(n>d) {
	       ans=sum;
	       for(k=d+1;k<n;k++) {
	           printf("$$$%d$$$",ans);
	           ans=ans - a[k-d-1];
	           printf("**%d**\n",ans); } }
	   else {
	     for(k=0;k<n;k++) {
	         ans=ans + a[k]; } }
	   printf("%d",ans);
	return 0; }