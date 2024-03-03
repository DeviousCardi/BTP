#include <stdio.h>
int sort(float a[],int n) {
    int max_value=0,j,max_index;
    if (n==0)
    return 0;
    else for(j=0;j<n;j++) {
        if(a[j]>max_value)
        max_value=a[j];
        max_index=j; }
    int dummy;
    dummy=a[n-1];
    a[n-1]=a[max_index];
    a[max_index]=dummy;
    return sort(a,n-1); }
int main() {
    int n,k;
    scanf("%d",&n);
    float a[n];
    for(k=0;k<n;k++) {
        scanf("%f",&a[k]); }
    sort(a,n);
    for(k=0;k<n;k++) {
        printf("%.1f\n",a[k]); }
        if (n%2==0)
        return (a[n/2]+a[n/2+1])/2;
        else
        return a[n/2+1];
    return 0; }