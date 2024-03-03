#include <stdio.h>
#include <stdlib.h>
int main() {
   int n,i,j,m,k,a;
    scanf("%d",&n);
    k=n-2;
    a=n;
    for(i=1;i<=n;i++) {
    for(j=0;j<=k;j++) {
    printf(" "); }
	for(m=1;m<=a;m++) {
	printf("%d",a%10); }
	k=k-1,a=a+1;
	printf("\n"); }
   return 0; }