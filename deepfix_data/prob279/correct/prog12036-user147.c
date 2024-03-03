#include <stdio.h>
int main()
{ int a[100],count[100],n;
scanf("%d\n",&n);
for(int i=0;i<n;i++)
count[i]=0;
for(int i=0;i<n;i++)
  {scanf("%d ",&a[i]);
   for(int j=0;j<n;j++)
   { if(a[i]==j)
   count[j]++;} }
for(int i=0;i<n;i++)
{if(count[i]==2)
printf("%d\n",i);}
for(int i=0;i<n;i++)
{if(count[i]==0)
printf("%d",i);}
    return 0; }