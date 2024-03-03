#include <stdio.h>
#include <math.h>
int main(){
    int i,l,m,n;
    scanf("%d%d",&l,&n);
    int a[n],b[1000];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    b[0]=1;
    for(i=0;i<1000;i++)
     {b[i]=0;}
    for(i=0;i<n;i++) {
      m=a[i];
      b[m]=1; }
    for(i=1;i<1000;i++)
    { if((b[i]==1)&&(b[l-i]==1))
      { printf("lucky");
        break; } }
    if(i==1000)
    printf("unlucky");
    return 0; }