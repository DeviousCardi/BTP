#include <stdio.h>
int main() {
    long int n,a[100000],i,j,c,mo;
    float me;
    scanf("%ld",&n);
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
            if(a[j]>a[i]) {
                c=a[j];
                a[j]=a[i];
                a[i]=c; } } }
    if(n%2==0) {
        me=(1.0)*(a[n/2]+a[n/2-1])/2;
        printf("%.1f",me); }
    else {
        mo=a[(n-1)/2];
        printf("%ld",mo); }
    return 0; }