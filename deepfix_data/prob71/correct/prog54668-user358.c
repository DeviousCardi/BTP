#include <stdio.h>
int main() {
    int n,x=0,y=0,z=0;
    scanf("%d ",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        x=a[i];
        for(int j=i;j<n;j++) {
            if(x>=a[j]) {
                x=a[j];
                y=j; } }
        a[y]=a[i];
        a[i]=x; }
    if(n%2!=0)
    printf("%d",a[(n-1)/2]);
    else {
        long long int z=a[n/2]+a[(n-1)/2];
        float k=a[n/2]+a[(n-1)/2];
        if(z%2==0)
        printf("%d",(a[n/2]+a[(n-1)/2])/2);
        if(z%2!=0)
        printf("%.1f %lld",k/2.0,z); }
    return 0; }