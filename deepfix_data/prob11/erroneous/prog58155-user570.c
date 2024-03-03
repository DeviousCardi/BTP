#include <stdio.h>
int sum((int arr[]),int n);
int main() {
    int i,n,s,arr[30];
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]) }
    return 0; }
int sum(arr,n) {
   if(n<=1)
   return 0;
   if((arr[n]+arr[n-1])==s)
   return 1;
   else
   return sum(arr,n-1); }