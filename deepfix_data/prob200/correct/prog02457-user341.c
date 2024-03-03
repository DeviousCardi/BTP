#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int MaxLessThan=0;
    for(int i=0;i<n;i++)
        if(arr[i]<=upperLimit)
            if(arr[i]>MaxLessThan)
                MaxLessThan=arr[i];
    return MaxLessThan; }
int main() {
    int k, max=0;
    scanf("%d", &n);
    scanf("%d", &k);
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
        if(arr[i]>max)
            max=arr[i]; }
    printf("%d\n", max);
    for(int i=2;i<=k;i++) {
        max=getMaxLessThan(max-1);
        printf("%d\n", max); }
    return 0; }