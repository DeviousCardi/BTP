#include <stdio.h>
int main() {
	int d,N,i,j;
	int b[30],a[20];
	scanf("%d%d",&d,&N);
	for(i=0;i<d;i++)
	    scanf("%d",&a[i]);
	a[N]=0;
	if((N>=0)&&(N<d)) {
	    a[N]=b[N]; }
	else {
	    for(i=1;i<=d;i++) {
	        a[N]=a[N]+a[N-i]; } }
	printf("%d",a[N]);
	return 0; }