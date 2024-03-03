#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,s,c;
    scanf("%d",&n);
    s=n-1;
    c=n;
    for(i=1;i<=n;i++) {
       for(j=1;j<=s;j++) {
          printf(" "); }
       s=s-1;
       for(j=0;j<(2*i-1); j++) {
           printf("%d", (c+j)%10); }
       c=c-1;
       printf("\n"); }
	return 0; }