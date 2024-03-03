#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,maxf=0;
    for(i=0;arr[i]!=upperLimit;i++) {
        maxf=(maxf>arr[i]?maxf:arr[i]); }
    return(maxf); }
int main() {
    int i,max,k;
    scanf("%d %d",&n,&k);
    int b[k];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    max=arr[0];
    for(i=1;i<n;i++) {
        max=(max>arr[i])?max:arr[i]; }
    b[0]=max;
    for(i=1;i<k;i++) {
        b[i]=getMaxLessThan(b[i-1]); }
    for(i=0;i<=k;i++) {
        printf("%d\n",b[i]); }
    return 0; }