#include <stdio.h>
int main() {
	int j,n,d;
	int a[30];
	scanf("%d %d",&d,&n);
	int b[d];
	for(int i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
	for(int i=0;i<=n;i++) {
	    if(i<d) {
	        a[i]=b[i]; }
	    else{a[i]=0;
	        for( j=(i-d);j<i;j++) {
	            a[i]=a[j]+a[i]; } } }
	printf("%d",a[n]);
	return 0; }