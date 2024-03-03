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
            if(a[j]<a[i]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; } } }
    if(n%2!=0) {
        printf("%ld",a[n/2]); }
    else {
        med=(a[n/2-1]+a[n/2])/2.0;
        printf("%.1lf",med); }
    return 0; }