#include<stdio.h>
long product(int a[],int n)
{int s=1;
    if(n==1)
    return a[0];
    s=a[n-1]*product(a,n-1);
    return s; }
int main()
{int n,i;
scanf("%d\n",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d ",&a[i]);
long pro=product(a,n-1);
printf("%ld",pro);
    return 0; }