#include <stdio.h>
int main(){
   int a1, a2, n,Tn;
   scanf("%d %d %d",&a1,&a2,&n);
   int i=1;
   int Tu=a1;
   int Tv=a2;
   if(n==1)
   printf("%d",a1);
   if(n==2)
   printf("%d",a2);
   if(n>2){
   for(i=3;i<=n;i++) {
   Tn=Tu+Tv-2;
   Tu=Tv;Tv=Tn; }
  printf("%d",Tn); }
  return 0; }