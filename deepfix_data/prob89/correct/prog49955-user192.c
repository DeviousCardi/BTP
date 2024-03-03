#include <stdio.h>
int main() {
  int k,n,i,count=0,j;
  int num[100];
  scanf("%d",&k);
  scanf("%d",&n);
  for(i=0;i<n;i++) {
     scanf("%d",&num[i]); }
  for(i=0;i<n;i++) {
     for(j=0;j<n;j++) {
        if((num[i]+num[j])==k) {
        count=count+1;
        break; } } }
  if(count!=0) {
   printf("lucky"); }
  else {
   printf("unlucky"); }
    return 0; }