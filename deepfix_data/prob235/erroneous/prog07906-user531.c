#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,m,j,k;
	scanf("%d",n);
	m=n;
	for(i=1;i<=n;i++) {
	    for(j=1;j<m;j++) {
	    printf(" "); }
	for(k=1;k<=i-1;k++) {
	    printf("%d",(m-i+k)%10) }
	for(k=1;k<i;k++ {
	    printf(m+k); {
	    printf("\n");
	    m--; }
	return 0; }