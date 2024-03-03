#include <stdio.h>
int main() {
    int n,i,j,count,f;
    scanf("%d\n",&n);
    int a[n];
    scanf("%d,",&a[i]);
    count=0;
    for (i=0;i<n;i++) {
        f=a[i];
        for(j=n;j>0;j--) {
            a[j]=f;
            count=count+1; } }
        if (count==a[i]) {
                printf("Yes"); }
        if (count!=a[i]) {
                printf("No"); }
    return 0; }