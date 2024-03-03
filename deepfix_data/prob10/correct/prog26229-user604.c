#include<stdio.h>
int maxtill(int n,int a[]);
int main()
{ int n,a[100],i;
  scanf("%d ",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("%d",maxtill(n,a[100]));
    return 0; }
int maxtill(int n,int a[])
{int c=1,m=1,i,j;
 for(i=0;i<n;i++)
 {for(j=(i+1);j<n;j++)
   {if (a[i]<a[j])
    c=c+1;}
  if(m<c)
  m=c;}
  return m;}