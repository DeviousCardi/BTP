#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,maxf=0;
    for(i=0;a[i]!=upperLimit;i++) {
        maxf=(max>arr[i]?maxf:arr[i]); }
    return(maxf); }
int main() {
    int i,max,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    max=arr[0];
    for(i=1;i<n;i++) {
        max=(max>arr[i])?max:arr[i]; }
    printf("%d",max);
    printf("\n%d",getMaxLessThan(max));
    return 0; }