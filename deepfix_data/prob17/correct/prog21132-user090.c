#include <stdio.h>
int main() {
    int n,m,flag=0,i,j;
    int a[n],b[m];
     scanf("%d",&n);
    for(i=1;i<=n;i++)
      {scanf("%d",&a[i]);}
      scanf("%d",&m);
    for(j=1;j<=m;j++)
       {scanf("%d",&b[j]);}
    for(i=1;i<=n;i++)
      { for(j=1;j<=m;j++)
          {if(a[i]==b[j]&&j>=i)
           {flag=flag+1 ;} } }
      if(flag>0)
      printf("YES");
	return 0; }