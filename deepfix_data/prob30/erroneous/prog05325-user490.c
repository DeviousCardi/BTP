#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int a) {
    int max=arr[0];
    for(int i=1;i<n;i++) {
       if(arr[i]>max) {
           max=arr[i]; } }
    return max; }
int main() {
    int k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]); }
    int max;
    max=a[0];
    for(int j=1;j<n;j++){
        if(a[j]>max){
            max=a[j]; } }
    int getMaxLessThan(int max)
    return 0; }