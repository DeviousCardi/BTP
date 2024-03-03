#include <stdio.h>
int main() {
 int i,j,m,n,amt,sum=0,max=0;
 scanf("%d%d",&n,&m);
 for(i=1;i<=n;i++){
     for(j=1;j<=m;j++){
         scanf("%d",&amt);
         sum=sum+amt; }
     if(max<sum) {max=sum;}
     sum=0; }
    printf("%d",max);
    return 0; }