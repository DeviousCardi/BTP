#include <stdio.h>
#include<math.h>
int sum1(int a[],int n) {
    int i,sum=0;
    for(i=0;i<n;i++)
    sum=sum+a[i];
    return sum; }
int sum(int a[],int n,int k,int j) {
    if(j==k)
    return 1;
    else if(j==n-1)
    return 0;
    return sum(&a[1],b,c,n,k,j+a[0])||sum(&a[1],c,b,n,k,j); }
int main() {
    int n,k,a[32],i,b,c,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    j=sum(a,n,k,0);
    if(j==0)
    printf("NO");
    else
    printf("YES");
    return 0; }