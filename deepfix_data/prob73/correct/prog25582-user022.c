#include <stdio.h>
int main() {
   int n,m,i,j,o,q;
   q=0;
   scanf("%d %d",&n,&m);
   for(i=1;i<=n;i++) {
       int p=0;
       for(j=1;j<=m;j++) {
           scanf("%d",&o);
            p+=o; }
       if(p>=q)
       q=p; }
    printf("%d",q);
    return 0; }