#include <stdio.h>
int main(){
   int n,i;
   int s=0;
   int a[4];
   scanf("%d",&n);
   for (i=0;n>0;i++)
   {a[i]=n%10;
   n=n/10;
    s=s+a[i]; }
   i=2016;
   do {
       if (i%s==0)
       { printf("%d",i);
       break;}
       i++; }
   while (i%s!=0);
    return 0; }