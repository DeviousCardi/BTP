#include <stdio.h>
#include <stdlib.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int target;
    int dmin=upperLimit-arr[0];
    target=arr[0];
    for (int i=1; i<n; i++) {
        int d=upperLimit-arr[i];
        if (d<dmin && d>0) {
            dmin=d;
            target=arr[i]; } }
    return target; }
int main() {
    int k;
    scanf("%d %d", &n, &k);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]); }
    int max=arr[0];
    for (int i=0; i<n; i++) {
        if (arr[i]>max) max=arr[i]; }
    printf("%d", getMaxLessThan(39));
    return 0; }