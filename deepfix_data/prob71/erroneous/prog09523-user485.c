#include <stdio.h>
int main() {
    long int n,i,j,temp=0;
    double med;
    scanf("%ld\n",&n);
    long int a[n];
    for(i=0;i<n;i++) {
        scanf("%ld ",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if(a[j]<min) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; } } }
    for(i=0;i<n;i++) {
        printf("%ld ",a[i]); }
    return 0; }