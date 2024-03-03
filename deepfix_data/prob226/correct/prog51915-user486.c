#include <stdio.h>
int main() {
    int d,n,i,sum=0,j;
    scanf("%d%d",&d,&n);
    int a[n+1];
    for(i=0;i<d;i++)
    scanf("%d",&a[i]);
    for(i=d;i<=n;i++)
    {for(j=1;j<=d;j++)
     {sum=sum+a[i-j];}
     a[i]=sum; }
    printf("%d",a[n]);
    return 0; }