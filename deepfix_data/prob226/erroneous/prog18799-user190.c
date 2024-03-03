#include <stdio.h>
int main() {
	int d,n;
	scanf("%d %d",&d,&n);
	int b[d],i,a[n];
	for(i=0;i<d;i++){
	    scanf("%d",&b[i]);
	    a[i]=b[i]; }
	for(i=d;i<=n;i++){
	    a[i]=0;
	    for(j=1;j<=d;j++){
	        a[i]=a[i]+a[i-j]; } }
	printf("%d",a[n]);
	return 0; }