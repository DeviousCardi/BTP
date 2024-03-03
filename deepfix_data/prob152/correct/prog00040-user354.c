#include <stdio.h>
int fun(int a[],int n,float sum)  {
    if(sum==0)  return 1;
    if(sum<0||n==0) return 0;
    else return fun(a+1,n-1,sum-*a)||fun(a+1,n-1,sum); }
int main() {
    int n, a[30];
    scanf("%d",&n);
    float sum=0;
    for(int i=0;i<n;i++)  {
        scanf("%d",&a[i]);
        sum+=a[i]; }
    sum=sum/2;
    if(fun(a,n,sum)==0)  printf("NO");
    else printf("YES");
    return 0; }