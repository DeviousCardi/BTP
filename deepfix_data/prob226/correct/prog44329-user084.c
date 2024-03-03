#include <stdio.h>
int main(){int i,d,a[12000]={1},b[12000],k,n,sum=0;
   scanf("%d",&d);
  scanf("%d",&n);
    for(i=0;i<d-1;i++)
    {scanf("%d",&b[i]);
    a[i]=b[i];}
    if(n>d-1)
    {for(k=n-d;k<n;k++) {
 a[k]=a[n-d]+a[k];        ; }
    printf("%d",a[n]); }
	return 0; }