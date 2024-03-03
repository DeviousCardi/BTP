#include<stdio.h>
int MaxTill(int a[],int size) {
    int max_till_now=a[0],count=1,i;
    for(i=1;i<size;i++) {
      if(a[i]>max_till_now) {
      max_till_now=a[i];
      count++; } }
    return count; }
int main() {
    int a[20],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    MaxTill(a,n);
    printf("%d",MaxTill);
    return 0; }