#include <stdio.h>
int main() {
    int n,x=0,y=0;
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
        y=a[n]+a[n-1];
        if(y%2==0)
        printf("%d",y/2);
        else
        printf("%.1f",y/2.0); }
    return 0; }