#include <stdio.h>
int main() {
      int n,i,j;
      int a[n];
      int b[n];
      int c[n];
      scanf("%d",&n);
      for(i=0;i<n;i++) {
          scanf("%d",&a[i]); }
      for(i=0;i<n;i++) {
          scanf("%d",&b[i]); }
          for(j=0;j<n;j++) {
              c[b[j]]=a[j]; }
        for(i=0;i<n;i++) {
      printf("%d",c[i]); }
    printf("end");
    return 0; }