#include<stdio.h>
int recursive(int a[],int n)
{if (n==0)
return 0;
 return (a[0]+recursive(a+1,n-1)); }
int main() {
int n;
    scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
 int sum=recursive(a,n);
   printf("%d",sum);
 return 0; }