#include <stdio.h>
int main(){
   int n;
   int a[100],b[100],j=1;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   scanf("%d",&a[i]);
   for(int i=2;i<=100;i++) {
       b[1]=1;
       b[i]=a[j];
       j=b[i]; }
   for(int e=1;k<100;k++)
   {for(int f=1;j<100;j++)
   if(b[e]==b[f]&&e!=f) {
   printf("%d",f);
   printf("%d",f-e);
   break; } }
    return 0; }