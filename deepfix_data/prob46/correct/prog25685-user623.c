#include <stdio.h>
int main(){
 int m,n,i,factor=0;
 scanf("%d%d",&m,&n);
 printf("%d%d",m,n);
 for(i=1;i<=n;i++) {
    if((n%i)==0)
    factor++; }
 if(factor==m)
 printf("YES");
 else
 printf("NO");
    return 0; }