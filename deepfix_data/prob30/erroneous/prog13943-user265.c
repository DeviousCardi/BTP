#include <stdio.h>
int arr[100]={0},i,j,m,c;
int n,k;
int getMaxLessThan(int upperLimit) {
 for(i=0;i<upperLimit-1;i++) {
     if(arr[i]>arr[i+1]) {
         c=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=c; } }
 return arr[upperLimit]; }
int main() {
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(j=n;j<=n-k+1;j--) {
         printf("%d\n",&(int getMaxLessThan(j))); }
    return 0; }