#include <stdio.h>
int maxindex(int start,int n,int array[]) {
  int m=start;
    for(int i=start;i<n;i++) {
        if(array[m]<array[i])
        m=i; }
  return m; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int d=maxindex(0,n,a);
    printf("%d",d);
    return 0; }