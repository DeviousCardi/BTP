#include<stdio.h>
int main() {
    int n,k,i,j,total=0,oldcount;
    scanf("%d%d",&n,&k);
    int a[n];
    int count[k];
    int output[k];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<=k;i++) {
        if(i==a[i]) {
            count[i]+=1; } }
      for(i=0;i<k;i++) {
          oldcount=count[i];
          count[i]=total;
          total+=oldcount; }
      for(i=a[j],j=0;j<n;j++) {
          for(count[i]<count[a[j+1]]) {
          output[count[i]]=i;
          count[i+]=1; } }
      for(i=0;i<n;i++) {
          printf("%d",output[i]); }
    return 0; }