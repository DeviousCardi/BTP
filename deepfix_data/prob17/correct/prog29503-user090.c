#include <stdio.h>
int main() {
    int n,m,flag=0,i,j,sum=0;
    int a[n],b[m];
     scanf("%d",&n);
    for(i=0;i<n;i++)
      {scanf("%d",&a[i]);}
      scanf("%d",&m);
    for(j=0;j<n;j++)
       {scanf("%d",&b[j]);}
    for(i=0;i<n;i++)
      { for(j=0;j<m;j++)
      sum=0 ;
          {if(a[i]==b[j])
           {flag=flag+1 ;break;}
           sum=sum+1; } }
      if(sum==m)
      printf("YES");
      else
      printf("NO");
	return 0; }