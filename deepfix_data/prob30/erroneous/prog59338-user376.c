#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int m=0
    for(i=0;i<n;i++) {
        if(arr[i]>m)
            m=arr[i]; }
    return m; }
int main() {
    int k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<k;i++) {
        k=getMaxLessThan(n);
        printf("%d",k); }
    return 0; }