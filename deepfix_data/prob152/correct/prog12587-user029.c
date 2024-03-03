#include <stdio.h>
int sums(int a[],int n,int sum,int sum1);
int main() {
   int n,a[100],sum1=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {sum1=sum1+a[i];}
     sums(a,n,0,sum1);
    return 0; }
int sums(int a[],int n ,int sum,int sum1) {
    if((sum1-sum)==sum)
    {printf("YES");return 0;}
    else if(n<0)
    {printf("NO");return 0;}
    return sums(a,n-1,sum+a[n-1],sum1)||sums(a,n-1,sum,sum1); }