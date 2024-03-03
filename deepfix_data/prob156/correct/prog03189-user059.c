#include <stdio.h>
int main() {
    int m,n,sum=0,i,j,a,x=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) {
       sum=0;
       for(j=0;j<m;j++) {
          scanf("\n%d",&a);
          sum=sum+a; }
       if(sum>x)
       x=sum; }
    printf("%d",x);
    return 0; }