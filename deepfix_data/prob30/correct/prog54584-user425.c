#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max && arr[i] < upperLimit)
            max = arr[i]; }
    return max; }
int main() {
    int n, k, max = 0, i;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i]; }
    max++;
    for (i = 0; i < k; i++) {
        printf("%d", max);
        max = getMaxLessThan(max);
        if (i != k - 1)
            printf("\n"); }
    return 0; }