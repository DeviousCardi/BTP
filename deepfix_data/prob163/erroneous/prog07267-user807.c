#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,i,j,k,s,q;
int x[501],m[501],c[501];
scanf("%d\n",&a);
scanf("%d\n",&b);
for(i=0;i<a;i++)
{x[i]=getchar(); }
for(j=0;j<b;j++)
{m[i]=getchar(); }
if(b>a)
{s=b-a;
    for(k=a-1;k>=0;k--)
 {c[k]=x[k]+m[k+s];
  printf("%d",c[k]);
 }}
 else
 {q=a-b;
 for(k=b-1;k>=0;k--)
 {c[k]=m[k]+x[k+q];
 printf("%d",c[k]); }
	return 0; }