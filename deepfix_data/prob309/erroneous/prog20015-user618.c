#include <stdio.h>
int main() {
    int n,i,j,count;
    scanf("%d\n",&n);
    int a[n];
    scanf("%d",a[i]);
    count=0
    for (i=0;i<n;i++) {
        for(j=n;j>0;j--) {
            a[i]=a[j];
            count+=1; }
        if (count==a[i]) {
            printf("Yes") }
        if (count!=a[i]) {
            printf("No") } }
    return 0; }