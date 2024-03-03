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
	   for(i=d;i<=n;i++) {
	       for(k=1;k<=d;k++) {
	           a[i]=a[i]+a[i-k]; }
	       if(i==n) {
	           printf("%d",a[i]); }
	       a[i]=0; } }
	return 0; }