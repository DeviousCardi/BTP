#include <stdio.h>
int main() {
    int n,m,flag=0,i  ;
    int a[n],b[m];
    for(i=1;i<=n;i++)
      {scanf("%d",&n);
      scanf("%d",&a[i]);}
    for(j=1;j<=m;j++)
      {scanf("%d",&m);
       scanf("%d",b[j]);}
    for(i=1;i<=n;i++)
      { for(j=1;j<=m;j++)
          {if(a[i]==b[j])
           {flag=flag+1 ;} } }
      if(flag>0)
      printf("yes")
	return 0; }