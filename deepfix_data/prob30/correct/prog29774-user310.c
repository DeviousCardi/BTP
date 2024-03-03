#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max = 0, i;
    for(i=0;i<n;i++) {
        if (arr[i]<upperLimit && arr[i]>max)
            max = arr[i]; }
    return (max); }
int main() {
    int k, upperLimit=0, x;
    int i;
    scanf("%d", &n);
    scanf("%d", &k);
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for(i=0;i<n;i++) {
        if(arr[i]>upperLimit)
            upperLimit = arr[i]; }
    printf("%d", upperLimit);
    for(i=0;i<k-1;i++) {
        x = getMaxLessThan(upperLimit);
        printf("%d\n", x);
        upperLimit = x; }
    return 0; }