#include<stdio.h>
int max(int n,int a[100]);
int main()
{ int n,m,a[100],i;
  scanf("%d ",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 m=max(n,a[100]);
    printf("%d",m);
    return 0; }
int max(int n,int a[100])
 {int c,m=1,i,j;
 for(i=0;i<n;i++)
 {c=1;for(j=(i+1);j<n;j++)
   {if (a[i]<a[j])
    c=c+1;}
  if(m<c)
  m=c;}
     return m; }