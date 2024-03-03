#include <stdio.h>
int main() {
	int d,N,i,n;
	int b[50],a[50];
	scanf("%d %d\n",&d,&N);
	for(i=0;i<d;i++)
	    scanf("%d",&b[i]);
	a[N]=0;
	if((N>=0)&&(N<d)) {
	    a[N]=b[N]; }
	else {
	    for(n=d+1;n<=N;n++) {
	    for(i=1;i<=d;i++) {
	        a[n]=a[n]+a[n-i]; } }
	printf("%d",a[N]);
	return 0; }