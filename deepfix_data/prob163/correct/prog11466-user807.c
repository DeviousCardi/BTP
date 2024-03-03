#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,i,j,k,s,q,l;
int x[501],m[501],c[501];
scanf("%d\n",&a);
scanf("%d\n",&b);
for(i=1;i<=a;i++)
{x[i]=getchar(); }
for(j=1;j<=b;j++)
{m[i]=getchar(); }
if(b>=a)
{s=b-a;
    for(k=b;k>0;k--)
 {while(k-s>=0)
     c[k]=x[k-s]+m[k];
 }for(i=1;i<=b+1;i++)
 {printf("%d",c[i]);} }
 else
 {q=a-b;
 for(l=a;l>0;l--)
 {while(l-q>=0)
     c[l]=m[l-q]+x[l];}
 for(i=1;i<=a+1;i++)
{ printf("%d",c[i]);} }
	return 0; }