#include<stdio.h>
int main() {
    int n,k,i,arr[10000],ar[10000],count[10000],coun,j,a[1000];
    scanf("%d %d ",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(j=0;j<=k;j++) {
        ar[j]=j;
        scanf("%d ",&ar[j]); }
   for(j=0;j<=k;j++)
   {  count[j]=0;
       for(i=0;i<n;i++) {
           if(ar[j]==arr[i]) {
               count[j]=count[j]+1;
               if(count[j]>=1) {
                   a[j]=ar[j];
                   printf("%d",a[j]); } } }
      printf("%d",count[j]); }
   for(i=0;i<n;i++) {
       for(j=0;j<n;j++) { } }
    return 0; }