#include <stdio.h>
int main() {
   int i,j,k,n,c=0;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(j=1;j<=n;j++)
    {for(i=0;i<n;i++)
      {if(a[i]==j)
       c=1;}
      {if(c==0)
       printf("%d",j);
       break;} }
    for(i=0;i<n;i++)
    {for(j=i+1;j<n;j++)
     {if(a[i]==a[j])
      {printf("%d",a[i]); break;}
      return 0; }