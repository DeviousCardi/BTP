#include<stdio.h>
int main() {
    int arr[21],n,max,count,maxx=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(int i=0;i<n;i++) {
        max=arr[i];
        count=1;
      for(int j=i;j<n;j++) {
          if(arr[j]>max) {
              max=arr[j];
              count+=1;
              printf("%d\n",arr[j]); } }
      if(count>maxx) {
          maxx=count; } }
    printf("%d",maxx);
    return 0; }