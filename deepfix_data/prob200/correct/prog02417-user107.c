#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,m=0;
    for(i=0;i<n;i++) {
        if (arr[i]>arr[i+1]&& arr[i]<upperLimit)
        m=arr[i]; }
    return m; }
int main() {
   int k,i,max;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
   max=  getMaxLessThan(1000);
    printf("%d\n",max);
    for(i=1;i<k;i++) {
    getMaxLessThan(max);
    printf("%d\n",max); }
    return 0; }