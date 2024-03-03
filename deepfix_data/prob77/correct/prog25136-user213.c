#include <stdio.h>
int main() {
    int i, x,max,min,n1,n2;
    scanf("%d",&x);
int a[x];
for( i=0;i<x;i++)
scanf("%d",&a[i]);
max=a[0];
for( i=0;i<x;i++)
{if(max<a[i])
max=a[i]; }
for( i=0;i<x;i++)
{if(max==a[i])
n1=i;
    break; }
 for( i=0;i<x;i++)
{if(min>a[i])
min=a[i]; }
for( i=0;i<x;i++)
{if (min==a[i])
n2=i;
    break; }
 a[n1]=min;
 a[n2]=max;
 for(int i=0;i<x;i++)
  printf("%d,a[i]");
    printf("end");
    return 0; }