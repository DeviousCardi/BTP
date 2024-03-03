#include <stdio.h>
int main() {
	int d,N,i,n;
	int b[50];
	scanf("%d %d\n",&d,&N);
	for(i=0;i<d;i++)
	    scanf("%d",&b[i]);
	if((N>=0)&&(N<d)) {
	    printf("%d",b[N]); }
	else {
	    for(n=d;n<=N;n++) {
	        b[n]=0;
	    for(i=n-1;i<=1;i--) {
	        b[n]=b[n]+b[n-i]; } }
	  	printf("%d",b[N]); }
	return 0; }