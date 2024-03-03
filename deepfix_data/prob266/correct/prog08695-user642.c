#include <stdio.h>
int main(){
   int c,n,i,s=0;
   scanf("%d",&n);
   for (i=0;n>0;i++)
   {c=n%10;
   n=n/10;
    s=s+c; }
   printf("%d",s);
   for (i=2016;c>0;i++) {
       c=0;
       if (i%s==0)
   {printf("%d",i);
   c=c+1;} }
   return 0; }