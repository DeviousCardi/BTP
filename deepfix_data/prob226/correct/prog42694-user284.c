#include <stdio.h>
int main() {
	int b[25],a[55],i,j,n,d;
	int  s,m=0;
	scanf("%d%d",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]);
	a[i]=b[i]; }
	j=0;
	for(i=0;i<d;i++) {
	    j=j+b[i]; }
	s=j;
	if(n<d)
	{i=0;
	j=0;
	    while(i<n) {
	        j=j+b[i]; }
	printf("%d",j); }
	if(n>d) {
	    for(i=1;i<=n-d;i++) {
	        m=s+m; }
	printf("%d",m); }
	return 0; }