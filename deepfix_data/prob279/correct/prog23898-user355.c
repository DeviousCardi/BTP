#include <stdio.h>
int main()
{int n,i,j,c,d,a[100],b[100],m;
  scanf("%i",&n);
  for(i=0;i<n;++i)
  scanf("%i",&a[i]);
  for(i=0;i<n;++i)
  b[i]=i+1;
  for(i=0;i<n-1;++i)
  {for(j=i+1;j<n;++j)
  if(a[i]==a[j])a[i]=0;}
   for(i=0;i<n;++i){if(a[i]==0)break;}c=a[i];
  for(i=0;i<n;++i)
  {for(j=0;j<n;++j)
  if(b[i]==a[j])b[i]=0;}
  for(i=0;i<n;++i)
  if(b[i]!=0)break;
  d=b[i];
  printf("%i\n%i",c,d);
    return 0; }