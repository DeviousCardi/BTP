#include <stdio.h>
int main() {
    int n,m,max=0,a[100],i,j,s=0;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++) {
        for(j=0; j<m; j++) {
            scanf("%d", &a[j]); } }
    for(i=1; i<=n; i++) {
        for(j=0; j<m; j++) {
            s=s+a[j]; }
      if(s>=max) {
          max=s; } }
    printf("%d", max);
    return 0; }