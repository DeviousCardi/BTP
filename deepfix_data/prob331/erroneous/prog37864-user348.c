#include <stdio.h>
int main(){
   int n,i,j,p;
   scanf("%d",&n);
   for(i=1;1<=n;i++) {
       for(j=1;j<=n;j++) {
           scanf("%d",&p);
           if(((i==j)&&(p=1))&&((i!=j)&&(p=0))) } }
    return 0; }