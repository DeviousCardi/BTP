#include <stdio.h>
int main(){
   int a1, a2, n, Tu , Tv ,Tn;
   scanf("%d%d%d",&a1,&a2,&n);
   int u=n-1;
   int v=n-2;
   if(n==1) {
   Tn=a1; }
   if(n==2) {
   Tn=a2; }
   if(n>2) {
   Tn=Tu+Tv; }
   printf("%d",Tn);
   return 0; }