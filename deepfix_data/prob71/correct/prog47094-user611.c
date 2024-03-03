#include <stdio.h>
int main() {
    int n,x;
    scanf("%d",&n);
    int a[1000000];
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
           if(a[i]<a[j]) {
               continue; }
           else if(a[i]>a[j]) {
               x=a[i];
               a[i]=a[j];
               a[j]=x; } } }
    if(n%2!=0)
    printf("%d",a[(n+1)/2]);
    else {
        float z;
        z=(a[n/2]+a[(n/2)+1])/2.0;
        printf("%.1f",z); }
    return 0; }