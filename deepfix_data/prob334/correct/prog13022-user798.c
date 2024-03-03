#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,m,b,k,n;
    scanf("%d%d",&n,&b);
   m=0;
    for(i=1;i<=n;i++) {
        for(k=(n-i);k>=1;k--) {
            printf(" "); }
        for(j=1;j<=(b-(5-i)*2);j=j+1)
       { m=m+1;
           printf("%d",m%10); }
       m=i;
       printf("\n"); }
	return 0; }