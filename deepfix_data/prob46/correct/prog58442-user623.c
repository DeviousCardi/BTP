#include <stdio.h>
int main(){
 int m,n,i,factor;
 scanf("%d%d",&m,&n);
 for(i=2;i<m;i++) {
    if((n%i)==0)
    factor++; }
 if(factor+2==n)
 printf("YES");
 else
 printf("NO");
    return 0; }