#include <stdio.h>
int main() {
    int n,i,t,j;
    float s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if(a[j]<a[i]) {
            t=a[i];
            a[i]=a[j];
            a[j]=t; } } }
    if(n%2==0) {
        printf("%d %d\n",a[n/2],a[(n/2)-1]);
        s=(a[n/2]+a[(n/2)-1])/2.0; }
    else
        s=a[n/2];
    printf("%0.1f",s);
    return 0; }