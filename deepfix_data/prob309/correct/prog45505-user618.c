#include <stdio.h>
int main() {
    int n,i,j,count,f;
    scanf("%d\n",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d,",&a[i]); }
    count=0;
    for (i=0;i<n;i++) {
        for(j=n-1;j>=0;j--) {
            a[j]=a[i];
            count=count+1; } }
        if (count==a[i]) {
                printf("Yes"); }
        if (count!=a[i]) {
                printf("No"); }
    return 0; }