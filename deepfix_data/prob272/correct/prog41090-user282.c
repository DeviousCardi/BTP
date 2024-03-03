#include <stdio.h>
int main(){
   int a1, a2, n, Tu , Tv;
   scanf("%d%d%d",&a1,&a2,&n);
   int u=n-1;
   int v=n-2;
   int Tn=Tu+Tv-2;
   if(n==1)
   printf("%d",a1);
   if(n==2)
   printf("%d",a2);
   for(n=3;3<=n;n++);
   printf("%d",Tn);
   return 0; }