#include <stdio.h>
int cpr(int a[],int s,int e, int m)
{int sum=0;
 if (s>e)
  return 0;
  sum=sum +a[s];
  if (sum==m) return 1;
  else cpr(a,s+1,e,m)||cpr(a,s,e,m); }
int main() {
    int n,a[30],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {  scanf("%d",&a[i]);
       s=s+a[i];}
    if(s%2==1)
    printf("NO");
    return 0; }