#include <stdio.h>
int n,ans=0;
int check(int a[],int index,int sum)
{   if(sum==0)
{ ans++;
  printf("%di",index);
  return 0; }
    if(sum<0)
    return 0;
    if(index>n-1 && sum!=0)
    return 0;
    int temp1=check(a,index+1,sum-a[index]);
   int temp2; check(a,index+1,sum);
    return 0; }
int main() {
    int sum=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
    scanf("%d ",&a[i]);
    sum=sum+a[i]; }
    if(n%2!=0 || sum%2!=0)
    printf("NO");
    int c=check(a,0,sum/2);
    printf("%d",ans);
    if(ans>0)
    printf("YES");
    return 0; }