#include <stdio.h>
int main() {
    int d,n,a[40],b[40];
    scanf("%d%d",&d,&n);
    for(int i=0;i<d;i++)
    scanf("%d",&b[i]);
    for(int i=0;i<d;i++)
    a[i]=b[i];
    for(int i=d;i<=n;i++)
    {a[i]=0;
    for(int c=i-d;c<i;c++)
        a[i]=a[i]+a[c];}
    printf("%d",a[n]);
	return 0;}