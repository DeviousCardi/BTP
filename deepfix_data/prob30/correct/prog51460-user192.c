#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max;int i=n-1;
    while(i>=0) {
        if(arr[i]<=upperLimit) {
            max=arr[i]; }
        i--; }
    i=n-1;
    while(i>=0) {
       if(arr[i]>max) {
           if(arr[i]<=upperLimit) {
          max=arr[i]; } }
       i--; }
    return max; }
int main() {
    int k;
    int ncalls=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int x=getMaxLessThan(100000);
    printf("%d\n",x);
    while(ncalls<k-1) {
        printf("%d\n",getMaxLessThan(x-1));
        x=getMaxLessThan(x-1);
        ncalls++; }
    return 0; }