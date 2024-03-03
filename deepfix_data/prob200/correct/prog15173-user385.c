#include <stdio.h>
int main() {
int n,m,i,j,t;
scanf("%d %d\n",&n,&m);
int a[n];
for(i=0;i<n;i++) {
    scanf("%d ",&a[i]); }
for(i=0;i<(n-1);i++) {
    for(j=i+1;j<n;j++) {
        t=a[i];
        if(a[i]>a[j]) {
           a[i]=a[j];
           a[j]=t; } } }
  for(i=n;i>=(n-m);i--) {
      printf("%d\n",a[i]); }
    return 0; }