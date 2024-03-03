#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i,n,q,p,j,r,l;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
scanf("%d",&q);
	int b[q];
	for(l=0;l<q;l++) {
	    scanf("%d",&b[l]); }
int count=0;
	for(i=n-1;i>=0;i--) {
	 for(j=q-1;j>=0;j--) {
	 if(j==i+q-n) {
	 p=a[i]+b[i+q-n]+count;
	  if(p>10)
	{ r=p%10;
	 printf("%d",r);
	 count=count+1; }
	  else if(p==10) {
	    printf("0"); }
	  else if(p<10) {
	     printf("%d",p); } } }
     for(j=0;j<q-n;j++) {
         printf("%d",a[j]); }
	return 0; }