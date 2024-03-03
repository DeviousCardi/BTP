#include <stdio.h>
#include <stdlib.h>
int main() {
	int A[10000],n,i,j,k,a=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&A[i]); }
	for(j=n;j<1;j--) {
    for(k=0;k<n;k++)
    if (A[k]=A[j]) {
        a=a+1; }
    printf("%d",a); }
	return 0; }