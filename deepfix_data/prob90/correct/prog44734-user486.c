#include <stdio.h>
#include <math.h>
int main(){
    int i,l,m,n;
    scanf("%d%d",&l,&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<500;i++)
     {b[i]=0;}
    for(i=0;i<n;i++)
    { m=a[i];
      b[m]=1; }
    for(i=0;i<500;i++)
    { if((b[i]==1)&&(b[l-i]==1))
      { printf("lucky");
        break; } }
    if(i==500)
    printf("unlucky");
    return 0; }