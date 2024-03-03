#include <stdio.h>
int main() {
	int d,n;
	int i,k;
	scanf("%d %d",&d,&n);
	int a[n],b[d];
	for(i=0;i<d;i++){
	scanf("%d ",&b[i]); }
	if(n<d) {
	    a[n]=b[n];
	    printf("%d",a[n]); }
	else {
	   for(i=d;i<n;i++) {
	       int t=0;
	       for(k=1;k<=d;k++) {
	           t = t + a[i-k]; }
	       a[i]=t; }
	   printf("%d",a[n]); }
	return 0; }