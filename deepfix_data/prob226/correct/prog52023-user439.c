#include <stdio.h>
int main() {
	int d,n,i=0;
	int b[25],a[40];
	scanf("%d%d",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<d;i++) {
	    a[i]=b[i]; }
	int s1,s=0;
	for(i=0;i<d;i++) {
	    s1=s1+a[i]; }
	a[d]=s1;
	if(n>d) {
	    s=s1;
	for(i=d+1;i<=n;i++) {
	    a[i]=s+a[i-1];
	    s=s1+a[i-1]; } }
	printf("%d",a[n]);
	return 0; }