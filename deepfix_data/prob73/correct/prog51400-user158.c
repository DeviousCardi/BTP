#include <stdio.h>
int main() {
    int i,j,n,m,max=-1;
    scanf("%d %d",&n,&m);
    int heap;
    int sum=0;
  for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&heap);
            sum=sum+heap; }
          if (sum>max){max=sum;}
          sum=0; }
    printf("%d",max);
    return 0; }