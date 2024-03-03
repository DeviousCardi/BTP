#include <stdio.h>
int main(){int i,d,a[12000]={0},b[12000],k,n;
   scanf("%d",&d);
  scanf("%d",&n);
    for(i=0;i<=d-1;i++)
    {scanf("%d",&b[i]);
    a[i]=b[i];}
    if(n<d)
    printf("%d",a[n]);
    if(n>d-1)
    {for(k=n-d;k<n;k++)
 a[n]=a[k]+a[n]; }
    printf("%d",a[n]);
	return 0; }