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
    for(j=1;i<=m;j++)
    flag=0 ;
      { for(i=1;i<=m;i++)
          {if(b[j]==a[i]&&i>=j)
           {flag=flag+1 ;} } }
      if(flag>0)
      printf("YES");
      else
      printf("NO");
	return 0; }