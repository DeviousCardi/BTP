#include <stdio.h>
int arr[100];
int n,k;
int getMaxLessThan(int upperLimit) {
     int j;
     int i = upperLimit;
     for(i=0;i<n;i++) {
         printf("%d\n", arr[i]); }
     while(i >= 0) {
         i--;
         for(j=0;j<n;j++) {
             if(arr[j] == i) {
                 break; }
             if(j != n) {
                 break; } } } }
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
        a = getMaxLessThan(max);
        max = a; }
    for(i=0;i<k;i++) { }
    return 0; }