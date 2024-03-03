#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0;
    for(int i=0; i<n; i++) {
        if(max<arr[i] && arr[i]<=upperLimit)
            max=arr[i]; }
    return max; }
int main() {
    int k;
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    int max=0;
    for(int i=0; i<n; i++) {
        if(max<arr[i])
            max=arr[i]; }
    printf("%d\n", max);
    for(int i=0; i<k-1; i++) {
        max = getMaxLessThan(max-1);
        printf("%d\n", max); }
    return 0; }