#include <stdio.h>
int main() {
    int n,m,sum,max,i1,i2,num;
    scanf("%d %d", &n,&m);
    max=0;
    for(i1=1;i1<=n;i1++) {
      sum=0;
    for(i2=1;i2<=m;i2++) {
      scanf("%d", &num);
      sum = sum + num; }
    if(sum > max)
    max = sum; }
    printf("%d", max); }