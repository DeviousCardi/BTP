#include <stdio.h>
int main(){int i,d,a[12000],b[12000],k,n,sum;
   scanf("%d",&d);
   scanf("%d",&n);
    for(i=0;i<d-1;i++)
    {scanf("%d ",&b[i]);
    a[i]=b[i];}
    if(n>d-1)
    {for(k=n-1;k>n-d;k--)
    {a[k]=sum+a[k]; }
    printf("%d",a[n]); }
	return 0; }