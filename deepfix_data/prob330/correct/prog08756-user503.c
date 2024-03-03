#include <stdio.h>
int main() {
    int n,i;int sum=0;
    scanf("%d\n",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for (i=1;i<(n-1);i++) {
        if ((a[i]>a[i-1])&&(a[i]>a[i+1])) {
            sum = sum+1; } }
    printf("&d",sum);
    return 0; }