#include <stdio.h>
#include <stdlib.h>
int main() {
    int k,n,i,j,s,c,d,h;
    scanf("%d",&k);
    n=(k+1)/2;
    s=n-1;
    c=n;
    for(i=1;i<=n;i++) {
       for(j=1;j<=s;j++) {
          printf(" "); }
       s=s-1;
       for(j=0;j<(2*i-1); j++) {
           printf("%d", (c+j)%10); }
       printf("\n"); }
  h=1;
  d=2;
   for(k=n-1;k>=1;k--) {
       for(j=1;j<=h;j++) {
          printf(" "); }
       h=h+1;
       for(j=0;j<(2*i-1); j++) {
           printf("%d", (d+j)%10); }
       printf("\n"); }
	return 0; }