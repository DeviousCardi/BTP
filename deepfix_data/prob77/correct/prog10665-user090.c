#include <stdio.h>
    int max(int a,int b) {
     if(a>b)
      return a;
      else
      return b ;}
    int min(int x,int y) {
     if(x<y)
     return x ;
     else
     return y ;}
      int main() {
    int m,i,k,z;
    k=0;
    z=10000000000;
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i=i+1) {
        scanf("%d",&a[i]);
          k=max(a[i],k);
          z=min(a[i],z);
    if(a[i]!=k&&a[i]!=z)
    printf(" %d",a[i]);
    else if(a[i]==k)
    printf(" %d",z);
    else
    printf(" %d",k);}
     printf("\n%d%d\n",k,z);
    printf(" end");
    return 0; }