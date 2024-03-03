#include <stdio.h>
int main(){
   int n,i,j,t=0,k;
   scanf("%d",&n);
   int rs[n+1],re[n+1];
   for(i=1;i<=n;i++) {
       rs[i-1]=i;
       scanf("%d ",&re[i]); }
   for(i=1;i<=n;i++) {
       j=re[i]
       if(re[j]!=re[1])
       t+=1;
       else
       break; }
   printf("%d  %d",t,t-1);
    return 0; }