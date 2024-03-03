#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if (n==1)
    return 1;
    else if (n>=2)
    return (2*((2*(n-2))+1))*cat(n-1)/n; }
int main() {
	int i,n,a[100];
	scanf ("%d",&n);
	for (i=0;i<n;i++){
	    scanf ("%d\n",&a[i]); }
	printf("%d",cat(5));
	return 0; }