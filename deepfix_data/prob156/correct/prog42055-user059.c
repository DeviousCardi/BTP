#include <stdio.h>
int main() {
    int m,n,sum,i,j,a,x=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) {
       for(j=0;j<m;j++) {
          scanf("%d",&a);
          sum=sum+a; }
       if(sum>x)
       x=sum; }
    printf("%d",x);
    return 0; }