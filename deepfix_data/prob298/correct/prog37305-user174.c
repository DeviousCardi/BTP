#include <stdio.h>
#include <stdlib.h>
int sum=0;int k;int a[17];
int catalan(int n)
{ if(n==0)
return 1;
int i;
for(i=0;i<=n;i++)
sum+=catalan(i)*catalan(n-i);
    return sum; }
int main() {int i;
int t;int flag=0;
scanf("%d",&t);
    for(i=0;i<16;i++)
    { sum=0;
        a[i]=catalan(i); }
    int j;
   for(i=0;i<t;i++)
    { flag=0;
    scanf("%d",&k);
    for(j=0;j<17;j++) {
        if(k==a[j])
        {   flag=1; } }
    if(flag==0)
    printf("no\n");
    else
    printf("yes\n"); }
	return 0; }