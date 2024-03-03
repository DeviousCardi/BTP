#include <stdio.h>
int main() {
	int d,N,i,b[2000],j,a=0;
	scanf("%d %d",&d,&N);
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
	if(N<d && N>=0) {
	    a=b[N]; }
	else {
	for(j=N-d;j>N;j++) {
	    a=a+b[j]; }
	printf("%d",a); }
	return 0; }