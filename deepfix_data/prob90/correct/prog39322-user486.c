#include <stdio.h>
#include <math.h>
int main(){
    int i,l,m,n;
    scanf("%d%d",&l,&n);
    int a[n],b[500];
    for(i=0;i<n+1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<500;i++)
     {b[i]=0;}
    for(i=0;i<n;i++) {
      b[a[i]]++; }
    for(i=1;i<500;i++)
    { if((b[i]>0)&&(b[l-i]>0))
      { printf("lucky");
        break; } }
    if(i==500)
    printf("unlucky");
    return 0; }