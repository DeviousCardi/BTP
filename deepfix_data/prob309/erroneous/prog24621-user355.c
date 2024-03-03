#include <stdio.h>
int(int d,int b[],int){int c=0;for(i=0;i<n;++i)
if(b[i]==d){++c;}
if(c==d)return 1;if(c!=d)return 0;}
int main()
{int n,i,a[100],m=0;char b[100];
  scanf("%i",&n);
  for(i=0;i<n;++i)
  {scanf("%i",&a[i]);
  scanf("%c",&b[i]);}
  for(i=0;i<n;++i)
  if(f(a[i],a,n)==0){m=1;break;}
  if(m==0)printf("yes");
  if(m==1)printf("no");
    return 0; }