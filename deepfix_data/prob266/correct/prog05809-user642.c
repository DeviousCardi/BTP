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
   printf("%d",s);
   for (i=2016;i%s!=0;i++) {
       if (i%s==0)
       { printf("%d",i);
       break;} }
    return 0; }