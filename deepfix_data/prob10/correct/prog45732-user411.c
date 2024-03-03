#include<stdio.h>
int a,b;
int f() {
    int max(int a,int b);
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int i,n,j,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
  for(i=0;i<n;i++) {
  for(j=0;j<i;j++) {
    if(a[i]>a[j])
    f(); }
      printf("%d",a[i]); }
    return 0; }