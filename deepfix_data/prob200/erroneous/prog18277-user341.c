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
    scanf("%d", &n);
    scanf("%d", &k);
    int max=0;
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
        if(arr[i]>max)
            max=arr[i]; }
    printf("%d", max);
    for(int i=2;i<=k;i++) {
        max=getMaxLessThan(max-1);
        printf("%d", max); }
    return 0; }