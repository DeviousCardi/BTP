#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[501],b[501],sum[501];char c;
    int m,n,i,j;
    scanf("%d\n",&m);
     scanf("%d\n",&n);
     for(i=0;i<501;i++)
     {sum[i]=0;}
     if(m>=n) {
     for(j=0;j<m;j++) {
       c=getchar();
         a[j]=c;printf("%d",c); } }
	return 0; }