#include <stdio.h>
int main() {
  int i,j,n,m,sum=0,temp=0;
  scanf("%d %d",&n,&m);
 int a;
  for(i=0;i<n;i++) {
      sum=0;
      for(i=0;i<m;i++) {
          scanf("%d",&a);
          sum=sum+a; }
      if(sum>temp) {
          temp=sum; }
      else { } }
  printf("%d",temp);
    return 0; }