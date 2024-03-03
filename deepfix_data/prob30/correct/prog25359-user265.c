#include <stdio.h>
int arr[100]={0},i,j,m,c,v;
int n,k;
int getMaxLessThan(int upperLimit) {
 for(i=0;i<upperLimit-1;i++) {
     if(arr[i]>arr[i+1]) {
         c=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=c; } }
 return arr[upperLimit-1]; }
int main() {
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(j=n;j>=n-k+1;j--) {
        v=getMaxLessThan(j);
         printf("%d\n",v); }
    return 0; }