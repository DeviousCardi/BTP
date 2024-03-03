#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max;
    for(i=0;i<n;i++) {
        if (arr[i]<upperLimit && arr[i]>max)
            max = arr[i]; }
    return (max); }
int main() {
    int k, upperLimit = 100, x;
    scanf("%d", &n);
    scanf("%d", &k);
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for(i=0;i<k;i++) {
        x = getMaxLessThan(upperLimit);
        printf("%d\n", x);
        upperLimit = x; }
    return 0; }