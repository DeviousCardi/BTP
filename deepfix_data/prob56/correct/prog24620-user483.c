#include <stdio.h>
#include <stdlib.h>
int catalan (int n) {
 if(n==0) {
     return 1;
 }int r= 2*(2*(n-1))*catalan(n-1)/n+1;
   return r; }
int main() {
    int i,n;
    scanf("%d",&n);
    int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	return 0; }