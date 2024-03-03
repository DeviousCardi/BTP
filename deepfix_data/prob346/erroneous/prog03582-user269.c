#include <stdio.h>
int main() {
  int T,i,
      scanf("%d",&T);
  int a[T];
   for(i=1,i<=T;i++) {
      scanf("%d",&a[i]);
       if(a[i+1]>a[i]) {
           printf("%d",a[i]); } }
    printf("end");
    return 0; }