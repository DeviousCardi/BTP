#include <stdio.h>
int main() {
    int n,i,j,t;
    float c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[j]>a[i]) {
                t=a[i];
                a[i]=a[j];
                a[j]=t; } } }
    if(n%2==1) {
        printf("%d",a[(n-1)/2]);
        return 0; }
    else {
        c=(a[n/2]+a[(n/2)-1])/2.0;
        printf("%.1f",c); }
    return 0; }