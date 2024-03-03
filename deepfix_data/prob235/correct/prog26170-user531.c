#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,m,j,k,p;
	scanf("%d",&n);
	m=n/2+1;
	p=m;
	for(i=1;i<=n;i++) {
	    for(j=1;j<m;j++) {
	    printf(" "); }
	for(k=1;k<=i-1;k++) {
	    printf("%d",(p-i+k)%10); }
	printf("%d",p);
	for(k=1;k<i;k++) {
	    printf("%d",(p+k)%10); }
	    printf("\n");
	    m--; }
	return 0; }