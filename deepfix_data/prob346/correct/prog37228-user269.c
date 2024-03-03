#include <stdio.h>
 int min(int a,int b) {
     if(a>=b)
     return b;
     else
     return a; }
int main() {
  int T,i;
      scanf("%d",&T);
  int a[T];
   for(i=0;i<T;i++) {
      scanf("%d",&a[i]); }
     for(i=0;i<T;i++) {
      int k=  min(a[i+1],a[i]);
      printf("%d ",a[i]); }
    printf("end");
    return 0; }