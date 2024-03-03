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
    if(n%2==0)
        s=(a[n/2]+a[(n/2)-1])/2;
    else
        s=a[n/2];
    printf("%0.2f",s);
    return 0; }