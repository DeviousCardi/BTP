#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    return 1;
    cat(n)=(4*n+2)*cat(n-1)/(n+2) }
int main() {
	int a[20];int t,i
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",a[i]); }
	for(i=0;i<t;i++) {
	    printf("%d",cat(a[i])); }
	return 0; }