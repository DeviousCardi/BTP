#include <stdio.h>
int main() {
int n,m,i,j,t;
scanf("%d%d",&n,&m);
int a[n];
for(i=0;i<(n-1);i++) {
    for(j=i+1;j<n;j++) {
        t=a[i];
        if(a[i]>a[j]);
        a[j]=a[i];
        t=a[j]; } }
  printf("%d %d",a[n-1],a[n-2]);
    return 0; }