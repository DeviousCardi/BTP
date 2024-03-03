#include <stdio.h>
int main()
{ int a[100],count[100],n;
scanf("%d\n",&n);
for(int i=0;i<n;i++)
count[i]=0;
for(int i=0;i<n;i++)
  {scanf("%d ",&a[i]);
   for(int j=1;j<=n;j++)
   { if(a[i]==j)
   count[j-1]++;} }
for(int i=0;i<n;i++)
{if(count[i]==2)
printf("%d\n",i+1);}
for(int i=0;i<n;i++)
{if(count[i]==0)
printf("%d",i+1);}
    return 0; }