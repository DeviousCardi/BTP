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
        a[i]=x;
        printf("%d ",a[i]); }
    if(n%2!=0)
    printf("%d",a[(n-1)/2]);
    else {
        z=a[n/2]+a[(n-1)/2];
        if(z%2==0)
        printf("%d",z/2);
        else {
            float k=z;
            printf("%.1f",k/2); } }
    return 0; }