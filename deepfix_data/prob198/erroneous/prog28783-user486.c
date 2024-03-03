#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n1,n2,min1,min2,k;
	scanf("%d",&n1);
	int a[n1];
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n2);
	int b[n2];
	for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
    for(i=0;i<n1;i++)
    {for(j=n1-1;j>=i;j--)
      if(a[j-1]>a[j]&&(j-1>=0))
      {k=a[j-1];
       a[j-1]=a[j];
       a[j]=k;} }
    for(i=0;i<n1;i++) {
     for(j=0;j<n2;j++)
     {if(a[i]==b[j])
      c=9
     break;}
     if(c==9)
     printf("%d",a[i]) }
	return 0; }