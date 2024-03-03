#include <stdio.h>
int main()
{int a[100],i,n;
 scanf("%d",&n);
 for(i=0;i<n;++i)
 scanf("%d",&a[i]);
 for(i=0;i<n;++i)
 {m=a[i];ch=0;
 for(i=0;i<n;++i)
 {if (m==a[i])
  ch=ch+1;}
  if(ch==a[i])
  x=1;else
  {x=0;printf("No");break;}}
    return 0; }