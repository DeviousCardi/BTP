#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max;
    for(int i=n-1;i>=0;i--) {
        if(arr[i]<=upperLimit) {
            max=arr[i]; } }
    for(int i=1;i<n;i++) {
       if(arr[i]>max) {
           if(arr[i]<=upperLimit) {
          max=arr[i]; } } }
    return max; }
int main() {
    int k;
    int ncalls=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int x=getMaxLessThan(10000);
    printf("%d\n",x);
    while(ncalls<k-1) {
        printf("%d\n",getMaxLessThan(x-1));
        x=getMaxLessThan(x-1);
        ncalls++; }
    return 0; }