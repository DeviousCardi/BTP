#include <stdio.h>
int main() {
int n,m,i,j,t;
scanf("%d%d",&n,&m);
int a[n];
for(i=0;i<(n-1);i++) {
    for(j=i+1;j<n;j++) {
        t=a[i];
        if(a[i]>a[j]) {
           a[j]=a[i]; }
        t=a[j]; } }
  for(i=(n-m);i<n;i++) {
      printf("%d ",a[i]); }
    return 0; }