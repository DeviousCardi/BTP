#include <stdio.h>
int n;
int getMaxLessThan(int upperLimit) {
int max=upperLimit,q=0,t;
for(int i=0;i<100;i++) {
    if(max>arr[i]) {
        if(q<arr[i])
        q=arr[i]; } }
return q; }
int main() {
    int k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",arr[i]);
    int max=0;
    for(int i=0;i<n;i++) {
        if(max<arr[i])
        max=arr[i]; }
    int num[n];
    num[n-1]=max;
    for(int i=n-1;i>0;i--) {
        num[i-1]=getMaxLessThan(num[i]); }
    for(int i=0;i<k;i++)
    printf("%d ",num[i])
    return 0; }