#include<stdio.h>
int i=0;
long int total=0;
 int sum(int n)
 {   int a;
     scanf("%d",&a);
     total=total+a;
     i++;
     if(i==n)
     return total;
     else
     return sum(n); }
 int main()
 {   int n,ans;
     scanf("%d",&n);
     ans=sum(n);
     printf("%d",ans); }