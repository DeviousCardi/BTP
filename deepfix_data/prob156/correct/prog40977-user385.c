#include <stdio.h>
int main() {
    int n,m,i,j,b;
    long int s=0;
    scanf("%d %d\n",&n,&m);
    long int a[n];
    for(i=0;i<n;i=i+1) {
        s=0;
        for(j=0;j<m;j=j+1) {
           scanf("%d",&b);
           s=s+b; }
        a[i]=s; }
    long int d=a[0];
    for(i=1;i<n;i++) {
        if(a[i]>a[i-1]) {
            d=a[i]; } }
      printf("%ld ",d);
    return 0; }