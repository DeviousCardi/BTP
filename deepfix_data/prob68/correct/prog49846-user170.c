#include<stdio.h>
int product(int a[],int n)
{int s=1;
    if(n==0)
    return a[0];
    s=a[n]*product(a,n-1);
    return s; }
int main()
{int n,i,pro;
scanf("%d\n",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d ",&a[i]);
pro=product(a,n-1);
printf("%d",pro);
    return 0; }