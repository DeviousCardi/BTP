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
   int temp;
   temp=a[i];
   a[i]=a[n-1-i];
   a[n-1]=temp;
    printf("%d ",a[i]); }
    return 0; }