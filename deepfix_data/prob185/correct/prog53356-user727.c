#include <stdio.h>
#include<math.h>
int sum1(int a[],int n) {
    int i,sum=0;
    for(i=0;i<n;i++)
    sum=sum+a[i];
    return sum; }
int sum(int a[],int b[],int c[],int n,int k,int j) {
    int i;
    b[j%n]=a[j%n];
    if(sum1(b,n)==k)
    return 1;
    else if(j==n)
    return 0;
    return sum(a,b,c,n,k,j+1)||sum(a,c,b,n,k,j+1); }
int main() {
    int n,k,a[32],i,b[32],c[32],j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    c[i]=0;
    j=sum(a,b,c,n,k,0);
    if(j==0)
    printf("NO");
    else
    printf("YES");
    return 0; }