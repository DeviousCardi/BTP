#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
int i,j,count=0,k,count2;
for(i=0;i<l-r+1;i++) {
    count=0;
    for(j=i;j<i+r;j++) {
     for(k=j+1;k<i+r;k++) {
            if(arr[j]>arr[k]) {
            count++; } } }
    if(i==0) {
        count2=count; }
    if(count2<count) {
            count2=count; } }
return count2; }
int main() {
    int n,k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
      k=getInversions(n,k);
      printf("%d",k);
    return 0; }