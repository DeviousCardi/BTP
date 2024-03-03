#include <stdio.h>
int main() {
 int n,m,i,j,a,gold,max=0;
 scanf("%d %d",&n,&m);
 for(i=1;i<=n;i++) {
     gold=0;
     for(j=1;j<=m;j++) {
         scanf("%d",&a);
         gold=gold+a; }
     if(gold>max)
     max=gold; }
 printf("%d",max);
    return 0; }