#include <stdio.h>
int main() {
    int n,m,i,j,a;
    scanf("%d%d",&n,&m);
    int s[n];
    for (i=0;i<n;i++) {
      int sum=0;
        for (j=1;j<=m;j++) {
          scanf("%d",&a);
          sum=sum+a; }
         s[i]=sum; }
    for (i=0;i<n;i++)
        printf("%d ",s[i]);
    return 0; }