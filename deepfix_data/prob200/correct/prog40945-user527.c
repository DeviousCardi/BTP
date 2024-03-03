#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int temp=0;
    for(int i=0;i<upperLimit;i++) {
        if(temp<arr[i]) {
                temp=arr[i];
                arr[i]=0; } }
    return temp; }
int main() {
    int i,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;scanf("%d",&arr[i++]));
    while(k--) {
        printf("%d",getMaxLessThan(n)); }
    return 0; }