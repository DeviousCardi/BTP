#include <stdio.h>
 int min(int a,int b) {
     if(a>=b)
     return b;
     else
     return a; }
int main() {
  int T,i,k=-1;
      scanf("%d",&T);
  int a[T];
   for(i=0;i<T;i++) {
      scanf("%d",&a[i]); }
     for(i=0;i<T;i++) {
     k=min(k,a[i]); }
    printf("%d",k);
    printf("end");
    return 0; }