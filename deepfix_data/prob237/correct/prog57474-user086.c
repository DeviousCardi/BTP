#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
int i,j,count=0,temp,k,count2;
for(i=0;i<l-r+1;i++) {
    temp=arr[i];
    count=0;
    for(j=i+1;j<i+k;j++) {
        if(temp<arr[j]) {
            temp=arr[j];
            count++; } }
    if(i==0) {
        count2=count; }
    else {
        if(count2<count) {
            count2=count; } } }
return count2;}
int main() {
    int n,k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
      k=getInversions(n,k);
    return 0; }