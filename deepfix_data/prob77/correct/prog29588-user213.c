#include <stdio.h>
int main() {
    int x,max,min,n1,n2;
    scanf("%d",&x);
int a[x];
for(int i=0;i<x;i++)
scanf("%d,&a[i]");
max=a[0];
for(int i=0;i<x;i++)
{if(max<a[i])
max=a[i]; }
for(int i=0;i<x;i++)
{if (max==a[i]);
n1=i;
    break; }
 for(int i=0;i<x;i++)
{if(min>a[i])
min=a[i]; }
for(int i=0;i<x;i++)
{if (min==a[i]);
n2=i;
    break; }
 a[n1]=min;
 a[n2]=max;
 for(int i=0;i<x;i++)
  printf("%d,a[i]");
    printf("end");
    return 0; }