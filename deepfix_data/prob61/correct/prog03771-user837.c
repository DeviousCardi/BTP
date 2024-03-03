#include<stdio.h>
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",arr[i]);
    int count[k+1];
    for(int i=0;i<k+1;i++)
    count[i]=0;
    int final[n];
    for(int l=0;l<k+1;l++) {
     int cnt=0;
     for(int i=0;i<n;i++) {
         for(int j=i+1;j<n;j++) {
            if(arr[i]==arr[j])
            cnt++; } }
      count[l]=cnt; }
    for(int i=0;i<k+1;i++) {
        printf("%d",count[i]); } }