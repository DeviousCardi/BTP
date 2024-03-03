#include<stdio.h>
int main() {
    int n,k,i,arr[10000],ar[10000],count[10000],coun,j;
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
               count[j]=count[j]+1; } }
      printf("%d",count[j]); }
   printf("~%d",count[2]);
    return 0; }