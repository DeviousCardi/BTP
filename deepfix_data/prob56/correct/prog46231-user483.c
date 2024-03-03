#include <stdio.h>
#include <stdlib.h>
int catalan (int n) {
 if(n==0) {
     return 1; }
 return (2*(2*n-1)*catalan(n-1))/(n+1); }
int main() {
    int i,n;
    scanf("\n%d",&n);
    int a[n];
	for(i=0;i<n;i++)
	scanf("\n%d",&a[i]);
	printf("%d",a[i]);
 if(a[i]<=catalan(n)) {
     printf("%d",catalan(n)); }
	return 0; }