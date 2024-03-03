#include<stdio.h>
#include<strings.h>
void rev(int a[],int n) {
  {if (n==0)
 printf("%d ",a[n]);
 else
{printf("%d ",a[n-1]);
rev( a,(n-1));}} }
int main()
{  int n,a[100000],i;
scanf("%d",&n);
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
rev(a,n);
    return 0; }