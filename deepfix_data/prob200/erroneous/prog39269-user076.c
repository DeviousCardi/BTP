#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit)
{int q;
    q=a[0];
  for(i=0;i<n;i++) {
      if(a[i]>q && a[i]<p) {
          q=a[i]; } }
   return (q); }
int main() {
    int n,k,i,j,a[100],p;
    scanf("%d  %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    p=a[0];
    for(i=0;i<n;i++) {
      if(a[i]>p) {
          p=a[i]; } }
  upperLimit=p;
   for(i=0;i<k;i++) {
    getMaxLessThan(int upperLimit);
    printf("\n"); }
    return 0; }