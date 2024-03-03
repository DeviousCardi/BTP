#include <stdio.h>
int fun(int n,int a[n],int sum1,int sum2,int index) {
    if(index==n-1) {
        return sum1==sum2; }
    else
    return fun(n,a,sum1+a[index],sum2,index+1)||fun(n,a,sum1,sum2+a[index],index+1); }
int main() {
    int n,d=0,sum=0,sum1=0,sum2=0,index=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i=i+1) {
        scanf("%d",&arr[i]);
        sum=sum+arr[i]; }
    if(sum%2==1)
    printf("NO");
    else{
    d=fun(n,arr,sum1,sum2,index);
    if(d==1)
    {printf("%d",d);
    printf("YES");}}
    return 0; }