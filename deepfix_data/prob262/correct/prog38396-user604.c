#include<stdio.h>
#include<strings.h>
int rev(int a[],int n) {
 printf("%d",a[n]); }
int main()
{ long int n,a[1000000000],i;
scanf("%d",&n);
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 {if (n==1)
 printf("%d",a[n]);
 else
 rev( a,(n-1));}
    return 0; }