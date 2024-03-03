#include <stdio.h>
int sum(int n,int a[n]) {
    int s=0;
    for(int i=0;i<n;i++) {
        s=s+a[i]; }
    return s; }
void arraycutter(int n,int k,int a[n]) {
   int j=k;
    while(j>=k && j<k-1) {
        a[j]=a[j+1];
        j++; }
    a[n-1]=0; }
int main() {
  int n,m,i;
  scanf("%d %d\n",&n,&m);
  int a[n];
  for(i=0;i<n;i++) {
      scanf("%d ",&a[i]); }
  arraycutter(n,0,a);
  for(i=0;i<n;i++) {
      printf("%d ",a[i]); }
    return 0; }