#include <stdio.h>
int main() {
    int flag,i,j,swap,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
        for(j=0;j<n-i-1;j++) {
            if(a[j]>a[j+1]) {
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap; } } }
    if(n%2!=0) {
        printf("%d",a[n/2]); }
    else {
        printf("%d",a[n/2] + a[n/2 -1]);
        float c = (a[n/2]+a[n/2+1])/2; }
    return 0; }