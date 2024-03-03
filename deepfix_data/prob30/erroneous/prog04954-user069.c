#include <stdio.h>
int arr[100]={0};
int n;
int max =0;
int getMaxLessThan(int upperLimit) {
    int max2 =0
    for(int d = 0; d<n; d++) {
        if(arr[d] < upperLimit && max2 < arr[d]) {
            max2 = arr[d]; } }
    printf("%d\n", max2);
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
    return 0; }