#include<stdio.h>
#include<strings.h>
int main() {
    int reuselt;
    int n,k;
   scanf("%d",&n);
   int i;
    int a[1000];
   for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
  for(i=0;i<n;i++) {
    k=a[n-1];
   a[n-i]=a[n-i-1];
    a[0]=k;
    printf("%d ",a[i]); }
    return 0; }