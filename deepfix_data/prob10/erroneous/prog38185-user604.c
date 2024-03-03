#include<stdio.h>
int maxtill()
int main()
{ int n,a[100],i;
  scanf("%d ",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
    return 0; }
int max(int a[])
{int c=1,m=1;
 for(i=0;i<n;i++)
 {for(j=(i+1);j<n;j++)
   {if (a[i]<a[j])
    c=c+1;}
  if(m<c)
  m=c;}
  return m;}