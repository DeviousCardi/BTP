#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,m,b,n;
    scanf("%d%d",&n,&b);
   m=0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=(14-(5-i)*2);j=j+1)
       { m=m+1;
           printf("%d",m%10); }
       printf("\n"); }
	return 0; }