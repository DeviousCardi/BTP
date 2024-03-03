#include <stdio.h>
#include <stdlib.h>
int b(n,k) {
    if(n<k)
    return 0;
    if(n==0&&k==0)
    return 1;
    if(k==0)
    return 1;
    return b(n-1,k)+b(n-1,k-1); }
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<20;i++) {
	    for(j=0;j<20;j++) {
	        if(b(i,j)==n) {
	        printf("%d %d",i,j);
	        return 0; } } }
	printf("-1");
	return 0; }