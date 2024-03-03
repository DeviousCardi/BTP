#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
int i,j,count=0,temp,k,count2;
for(i=0;i<l-r;i++) {
    count=0;
    for(j=i;j<i+r;j++) {
     temp=arr[j];
     for(k=j+1;k<i+r;k++) {
            if(temp<arr[k]) {
            temp=arr[k];
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