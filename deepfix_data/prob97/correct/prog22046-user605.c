#include <stdio.h>
#include <stdlib.h>
int main() {
  int n,i,j,m,k,a=1,p;
    scanf("%d",&n);
    k=n-2;
    for(i=0;i<n;i++) {
    p=n-i;
    for(j=0;j<=k;j++) {
    printf(" "); }
	for(m=1;m<=a;m++) {
	printf("%d",p%10);
	p++; }
	k=k-1,a=a+2;
	printf("\n"); }
   return 0; }