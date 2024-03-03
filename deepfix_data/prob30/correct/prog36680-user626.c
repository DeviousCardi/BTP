#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int r=arr[0];
    for(int i=1;i<n;i++) {
        if(arr[i]<upperLimit && arr[i]>r)
        r=arr[i]; }
    return r; }
int main() {
    int k;
    scanf("%d %d", &n,&k);
    for(int i=0;i<n;i++)
    scanf("%d ", &arr[i]);
    int u=1000;
    for(int i=0;i<k;i++) {
        u=getMaxLessThan(u);
        printf("%d\n", u); }
    return 0; }