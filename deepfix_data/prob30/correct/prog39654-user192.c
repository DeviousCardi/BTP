#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=arr[0];
    for(int i=1;i<100;i++) {
       if(arr[i]>max) {
        max=arr[i]; }
    return max; } }
int main() {
    int k;
    int ncalls=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    while(ncalls<=k) {
        printf("%d/n",getMaxLessThan(k));
        ncalls++; }
    return 0; }