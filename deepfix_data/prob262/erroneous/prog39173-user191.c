#include<stdio.h>
#include<strings.h>
int print(int a[],int n)
{   printf("%d",a[n]);
    if (n==0)
    return 0;
    n=n-1;
    print(a,n);
    return 0; }
int main()
{   int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]); }
    print(a[],n-1);
    return 0; }