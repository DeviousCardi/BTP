#include <stdio.h>
int main() {
    int n,i,swap,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n-1;j++) {
            if(a[j]>a[j+1])
            swap=a[j];
            a[j]=a[j+1];
            a[j+1]=swap; } }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    if(n%2!=0)
    printf("%d",a[(n-1)/2]);
    if(n%2==0)
    printf("%d",(a[n/2]+a[(n-2)/2])/2);
    return 0; }