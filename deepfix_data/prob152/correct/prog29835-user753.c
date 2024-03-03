#include <stdio.h>
int main() {
int n,i,sum=0,need;
scanf("%d",&n);
int ar[n];
for(i=0;i<=n-1;i++)
scanf("%d",&ar[i]);
for(i=0;i<=n-1;i++)
sum=sum+ar[i]/2;
printf("%d",sum);
    return 0; }