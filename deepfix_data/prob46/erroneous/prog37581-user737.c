#include <stdio.h>
int main(){
 int n,m,i,count=0;
 scanf("%d%d",&m,&n);
 for(i=2;i<n;i++) \* n&1 excluded* {
     if(n%i==0)   \*divides each no. and increments if remainder =0*\
     count++; }
 if(count==m)    \*compares the final count & m*\
 printf("YES");
 else
 printf("NO");
    return 0; }