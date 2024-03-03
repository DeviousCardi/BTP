#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n;j++)
    for(i=1;i<n;i++) {
        if(a[i-1]>a[i]) {
            t=a[i];
            a[i]=a[i-1];
            a[i-1]=t; } }
    if(n%2==0) {
        l=n/2;
        m=l-1;
    float    med=(a[l]+a[m])/2.0;
        if(med%2==0)
        printf("%d",med);
        else
        printf(".1f",med); }
    else {
        l=n/2;
        printf("%d",a[l]); }
    return 0; }