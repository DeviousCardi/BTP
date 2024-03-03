#include <stdio.h>
int rrotate(int a[],int d,int i) {
      int k;
      a[i+d]=a[i];
      k=a[i+d];
      return k; }
int main() {
    int n,i,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int d;
    scanf("%d",&d);
    for(i=0;i<n;i++) {
        rrotate(a,d,i);
        printf("%d ",k); }
    return 0; }