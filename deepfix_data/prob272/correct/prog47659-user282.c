#include <stdio.h>
int main(){
   int a1, a2, n;
   scanf("%d%d%d",&a1,&a2,&n);
   int Tu=a1;
   int Tv=a2;
   if(n==1)
   printf("%d",a1);
   if(n==2)
   printf("%d",a2);
   for(n=3;3<=n;n++) {
   int Tn=Tu+Tv-2;
   Tu=Tv;Tv=Tn;
   printf("%d",Tn);
   return 0;
}}