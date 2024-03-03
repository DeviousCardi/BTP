#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int r[n];
    int f[n];
    int k;
    for(k=0;k<n;k++)
    scanf("%d",&r[k]);
    int i,j;
    f[0]=r[0];
    for(i=1;i<n;i++) {
        f[i]=r[(f[i-1])];
        printf("%d ",f[i]);
        for(j=0;j<i;j++) {
            if (f[j]==f[i])
            break; } }
  printf("%d",r[r(1)]]);
    return 0; }