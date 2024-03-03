#include <stdio.h>
int main() {
    int i,j,n,m,max=-1;
    scanf("%d %d",&n,&m);
    int heap;
    int sum=0;
  for(i=0;i<n;i=i++) {
        for(j=0;j<m;j=j++) {
            scanf("%d",&heap);
            sum=sum+heap; }
          if (sum>max){sum=max;}
          sum=0; }
    printf("%d",max);
    return 0; }