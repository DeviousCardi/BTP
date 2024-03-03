#include <stdio.h>
int main() {
    int n,i,j,temp;
    float m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if(a[i]>a[j]) {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp; } } }
    if(n%2==0){
        m=(a[n/2]+a[n/2-1])/2;
        printf("%.1f",m); }
    else {
        m=a[n/2-1];
        printf("%.0f",m); }
    return 0; }