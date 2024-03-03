#include <stdio.h>
int main() {
      int n,i,j;
      int a[n];
      int b[n];
      int c[n];
      scanf("%d%d%d%d",&n,&a[n],&b[n],&c[n]);
      for(i=0;i<n;i++) {
          for(j=0;j<n;j++) {
              c[b[i]]=a[j]; } }
        for(i=0;i<n;i++) {
      printf("%d",c[b[i]]); }
    printf("end");
    return 0; }