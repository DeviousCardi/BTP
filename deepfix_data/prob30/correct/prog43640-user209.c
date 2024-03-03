#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0,t;
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            if(arr[i]>arr[j] && arr[i]>max) {
                    max=arr[i];
                    t=i; } } }
    arr[t]=0;
    return max; }
int main() {
    int k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<k;i++) {
        printf("%d\n",getMaxLessThan(n)); }
    return 0; }