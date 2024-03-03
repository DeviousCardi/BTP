#include <stdio.h>
int arr[100]={0};
int n;
int max =0;
int getMaxLessThan(int upperLimit) {
    for(int d = 0; d<n; d++) {
        if(arr[d] < upperLimit && max < arr[d]) {
            max = arr[d]; } }
    printf("%d\n", max);
    return 0; }
int main() {
    int k;
    scanf("%d %d\n", &n,&k);
    for(int a=0; a<n; a++) {
        scanf("%d ",&arr[a]); }
    for(int c=0; c<n; c++) {
        if(max < arr[c]) {
            max = arr[c]; } }
    getMaxLessThan(max);
    getMaxLessThan(max);
    getMaxLessThan(max);
    getMaxLessThan(max);
    return 0; }