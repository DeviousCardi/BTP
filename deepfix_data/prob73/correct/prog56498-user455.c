#include <stdio.h>
int main() {
  int n,m,value,i,j,c=0,a=0;
  scanf("%d %d",&n,&m);
  for(i=1;i<=n;i++) {
    for(j=1;j<=m;j++) {
    scanf("%d",&value);
    a=a+value; }
    if(c<a)
        c=a;
    a=0;
    printf("%d\n",c); }
    return 0; }