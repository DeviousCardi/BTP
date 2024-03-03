#include<stdio.h>
long product(double a[],int n)
{int s=1;
    if(n==0)
    return a[0];
    s=a[n]*product(a,n-1);
    return s; }
int main()
{int n,i;
scanf("%d\n",&n);
double a[n];
for(i=0;i<n;i++)
scanf("%lf ",&a[i]);
long pro=product(a,n-1);
printf("%ld",pro);
    return 0; }