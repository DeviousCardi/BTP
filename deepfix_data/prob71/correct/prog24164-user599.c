#include <stdio.h>
int main() {
    int n,i,j;
    long int a[100000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++) {
            if(a[i]>a[i+1]) {
                long int t=a[i];
                a[i]=a[i+1];
                a[i+1]=t; } }
    for(i=0;i<n;i++)
        printf("%ld",a[i]);
    if(n%2==0) {
        double p;
        p=(a[n/2]+a[n/2-1])/2.0;
        printf("%.1f",p); }
    else
        printf("%ld",a[(n-1)/2]);
    return 0; }