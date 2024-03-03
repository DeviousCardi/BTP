#include <stdio.h>
void equal(int sum,int n,int ar[]) { }
int main() {
int n,i,sum=0;
scanf("%d",&n);
int ar[n];
for(i=0;i<=n-1;i++)
scanf("%d",&ar[i]);
for(i=0;i<=n-1;i++)
sum=sum+ar[i];
equal(sum,n,ar);
    return 0; }