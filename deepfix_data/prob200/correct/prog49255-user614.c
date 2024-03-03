#include <stdio.h>
#include <stdlib.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max;
    if (arr[0]!= upperLimit) max= arr[0];
    else max= arr[1];
    for (int i=0; i<n; i++) {
        if (arr[i]>max && arr[i]< upperLimit) max=arr[i]; }
    return max; }
int main() {
    int k;
    scanf("%d %d", &n, &k);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]); }
    int max=arr[0];
    for (int i=0; i<n; i++) {
        if (arr[i]>max) max=arr[i]; }
    for (int i=0; i<k; i++) {
        printf("%d\n", max);
        max=getMaxLessThan(max); }
    return 0; }