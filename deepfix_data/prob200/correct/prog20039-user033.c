#include <stdio.h>
int arr[100];
int n,k;
int getMaxLessThan(int upperLimit) {
     int j;
     int i = upperLimit;
     while(i >= 0) {
         i--;
         for(j=0;j<n;j++) {
             if(arr[j] == i) {
                 break; }
             if(j != n) {
                 break; } } }
    return i; }
int main() {
    int i;
    scanf("%d %d", &n, &k);
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]); }
    int max = 0;
    for(i=0;i<n;i++) {
        if(arr[i] > max) {
            max = arr[i]; } }
    int b[k],a;
    for(i=0;i<k;i++) {
        b[i] = max;
        printf("%d", b[i]);
        a = getMaxLessThan(max);
        max = a; }
    for(i=0;i<k;i++) { }
    return 0; }