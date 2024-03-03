#include <stdio.h>
int main() {
	int a[1000],i,d,n,j;
	scanf("%d%d\n",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d",&a[i]); }
	if(n<d) printf("%d",a[n]);
	else {
	    for(i=d;i<=n;i++) {
	        for(j=1;j<=d;j++) {
	            a[i]=a[i]+a[i-j]; } }
	    	printf("%d",a[n]); }
	return 0; }