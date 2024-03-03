#include <stdio.h>
int k,arr[1000],n,m,i;
void rotate() {
    k=arr[n-1];
    for(i=1;i<n;i++)
  { arr[n-i]=arr[n-i-1]; }
    arr[0]=k; }
int main() {
     scanf("%d",&n);
     for(i=0;i<n;i++) {
     scanf("%d",&arr[i]); }
     scanf("%d",&m);
     for(i=0;i<m;i++)
        rotate();
     for(i=0;i<n;i++) {
     printf("%d ",arr[i]); }
    return 0; }