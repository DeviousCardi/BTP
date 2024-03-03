#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int largest = 0;
    int i = 0;
    for (i = 0; i < n; i++) {
        if ((arr[i] > largest) && (arr[i] < upperLimit)) {
            largest = arr[i]; } }
    return largest; }
int main() {
    int k = 0;
    int largest = 100000;
    scanf("%d %d", &n, &k);
    int i = 0;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); }
    for (i = 0; i < k; i++) {
        largest = getMaxLessThan(largest);
        printf("%d\n", largest); }
    return 0; }