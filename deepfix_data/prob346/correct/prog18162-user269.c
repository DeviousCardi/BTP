#include <stdio.h>
int main() {
  int T,i,k;
      scanf("%d",&T);
  int a[T];
   for(i=0;i<=(T-1);i++) {
      scanf("%d",&a[i]); }
    for(i=0;i<=(T-1);i++) {
          if(a[i+1]>a[i]) {
           k=a[i+1];
           if(a[i+2]>k)
           printf("%d ",k);
           else printf("%d ",a[i+2]); } }
    printf("end");
    return 0; }