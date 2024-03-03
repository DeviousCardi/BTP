#include<stdio.h>
int main() {
    int arr[21],n,max,ar[21],count;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        max=arr[i];
        count=0;
      for(int j=i;j<n;j++) {
          if(arr[j]>max) {
              max=arr[j];
              count+=1; } }
      ar[i]=count; }
    int ind=0;
    for(int i=0;i<n;i++) {
        if(ar[i]>ar[ind]) {
            ind=i; } }
    max=arr[ind];
    printf("%d",arr[ind]);
    for(int i=ind;i<n;i++) {
       if(max<arr[i]) {
           printf("%d",arr[i]);
           max=arr[i]; } }
    return 0; }