#include <stdio.h>
int main() {
    int n,i,j,swap;
    float med;
    scanf("%d",&n);
    float a[n];
    for(i=0;i<n;i++)
    scanf("%f",&a[i]);
    for(i=0;i<n;i++) {
        if(a[i-1]>a[i]) {
            for(j=i;j>=0;j--) {
                if(a[j-1]>a[j]) {
                    swap=a[i-1];
                    a[i-1]=a[i];
                    a[i]=swap; } } } }
    if(n%2==0) {
        med=(a[n/2]+a[n/2+1])/2;
        printf("%1.f",med); }
    else {
        printf("%f",a[n/2+1]); }
    return 0; }