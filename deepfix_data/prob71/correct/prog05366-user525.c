#include <stdio.h>
int main() {
    int n,i,j;
    float swap=0;
    scanf("%d\n",&n);
    float a[n];
    for(i=0;i<n;i++)
    scanf("%f",&a[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n-1;j++) {
            if(a[j]>a[j+1]) {
             swap=a[j];
            a[j]=a[j+1];
            a[j+1]=swap; } } }
    if(n%2!=0)
    printf("%f",a[(n-1)/2]);
    if(n%2==0)
    printf("%f",(a[n/2]+a[(n-2)/2])/2);
    return 0; }