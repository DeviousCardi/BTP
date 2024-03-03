#include <stdio.h>
int main() {
    int i, x,max,min,c,d;
    scanf("%d",&x);
int a[x];
for( i=0;i<x;i++)
scanf("%d",&a[i]);
max=a[0];
for( i=0;i<x;i++)
{if(max<a[i])
max=a[i];
else
max=max; }
for( i=0;i<x;i++)
if(max==a[i]) {
    c=i;
    break; }
min=a[0];
 for( i=0;i<x;i++)
{if(min>a[i])
min=a[i];
else
min=min; }
for( i=0;i<x;i++)
if (min==a[i])
{d=i;
    break; }
 a[c]=min;
 a[d]=max;
 for(int i=0;i<x;i++)
  printf("%d",a[i]);
    printf("end");
    return 0; }