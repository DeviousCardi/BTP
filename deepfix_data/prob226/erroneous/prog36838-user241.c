#include <stdio.h>
int main() {
	int a[100],b[100];
	int n,i,j;
	scanf("%d%d",&d,&n)
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<=n;i++) {
	    if(i<=d)
	    a[i]=b[i];
	    else
	    a[i]=0
	    for(j=0;j<d;j++) {
	        a[i]=a[i]+a[i-j-1] } }
	printf("%d",a[n]);
	return 0; }