#include <stdio.h>
int main()
{int n,i,a[100];char b[100];
  scanf("%i",&n);
  for(i=0;i<n;++i)
  {scanf("%i",&a[i]);
  scanf("%c",&b[i]);}
  printf("%i%c",a[0],b[0]);
    return 0; }