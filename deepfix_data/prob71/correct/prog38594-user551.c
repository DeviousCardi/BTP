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
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }