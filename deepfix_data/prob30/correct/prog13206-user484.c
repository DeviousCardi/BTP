#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,a=0;
    for(i=0;i<n; i++) {
        if((arr[i]>a)&&(arr[i]<=upperLimit))
           a =arr[i]; }
    return a; }
int main() {
    int  n,k,i,b[100];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",arr[i]); }
    for(i=0;i<n;i++) {
        printf("%d",arr[i]); }
    return 0; }