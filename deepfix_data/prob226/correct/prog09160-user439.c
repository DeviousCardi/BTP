#include <stdio.h>
int main() {
	int d,n,i=0;
	int b[25],a[40];
	scanf("%d%d",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<d;i++) {
	    a[i]=b[i]; }
	int j,s=0;
	for(j=d;j<=n;j++) {
	    for(i=1;i<=d;i++) {
	        s=s+a[j-i]; }
	    a[j]=s;
	    s=0; }
	printf("%d",a[n]);
	return 0; }