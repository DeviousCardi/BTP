#include <stdio.h>
int n,ans=0;
void check(int a[],int index,int sum)
{   if(sum==0 )
  {   ans++;
      return ; }
    if(sum<0)
    return ;
    if(index>n-1 && sum!=0)
    return ;
    check(a,index+1,sum-a[index]);
    check(a,index+1,sum); }
int main() {
    int sum=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
    scanf("%d ",&a[i]);
    sum=sum+a[i]; }
    if(n%2!=0 || sum%2!=0)
    printf("NO");
    else
    check(a,0,sum/2);
    if(ans>0)
    printf("YES");
    return 0; }