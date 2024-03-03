#include <stdio.h>
int main() {
    int i,max,j,n,m,y;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
    s=0;
      for(j=1;j<=m;j++){
      scanf("%d",&y);
      s=s+j; }
      if(max<s)
      max=s; }
    return 0; }