#include <stdio.h>
#include <stdlib.h>
int main() {
  int n,i,j,m,k,a;
    scanf("%d",&n);
    k=n-2;
    for(i=1;i<=n;i++) {
    for(j=0;j<=k;j++) {
    printf(" "); }
	for(m=1;m<=a;m++) {
	printf("*"); }
	k=k,a=a+2;
	printf("\n"); }
   return 0; }