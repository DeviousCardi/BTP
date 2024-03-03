#include<stdio.h>
#include<limits.h>
int main() {
   int n;
   scanf("%d\n",&n);
   int sqn[n-1];
   for(int i=0;i<n;i++) {
       scanf("%d",&sqn[i]); }
   int max[n-1];
   max[0]=sqn[0];
   int max1;
   max1=sqn[0];
   int count=0;
   for(int j=1;j<n;j++) {
       if(sqn[j]>max1) {
           max[j]=sqn[j];
           max1=sqn[j]; }
       else {
           max[j]=INT_MIN; } }
   for(int k=0;k<n;k++) {
       if(max[k]!=INT_MIN) {
           count++ } }
   printf("%d",count);
return 0; }