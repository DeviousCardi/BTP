#include <stdio.h>
int sum(int arr[], int n) {
    int count=0;
    for(int i=0;i<n;i++) {
        for(int j=1;j<n;j++) {
           for(int k=2;k<n;k++) {
               for(int l=3;l<n;l++) {
                   if(arr[i]+arr[j]==arr[k]+arr[l])
                   count++;
                   return count; } } } } }
int main() {
    int n,i;
    scanf("%d/n",&n);
    int arr[100000];
    for( i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int t=sum(arr[i], n);
    printf("%d",t);
    return 0; }