#include <stdio.h>
int main() {
    int n,m,i,j,a,sum,max=0;
    scanf("%d %d\n",&n,&m);
    for(i=0;i<n;i++) {
       for(j=0;j<m;j++) {
       scanf("%d ",&a);
       sum=sum+a; }
       if(sum>max)
       max=sum; }
    printf("%d",max);
    return 0; }