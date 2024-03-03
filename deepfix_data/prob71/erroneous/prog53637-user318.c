#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                int x=a[i];
                a[i]=a[j];
                a[j]=x; } } }
    if(n%2!=0)
    printf("%d",a[n/2]);
    else {
        float k=a[n/2-1]+a[n/2];
        printf("%.1f",k/2) }
    return 0; }