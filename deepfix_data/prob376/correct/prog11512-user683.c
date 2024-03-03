#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==1||n==0) return 1;
    else return 2*(2*n-1)*cat(n-1)/(n+1); }
int main() {
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	scanf("%d",&a[i]);
	printf("%d\n",cat(a[i])); }
	return 0; }