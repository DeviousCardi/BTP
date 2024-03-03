#include <stdio.h>
int main() {
    int n,temp,sum;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-1-i;j++) {
            if(a[j+1]<a[j]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=a[j]; } } }
    if(n%2==0) {
        sum=a[n/2]+a[(N/2)-1];
        if(sum%2==0)
        printf("%d",(sum/2));
        else
        printf("%.1f",(sum/2.0)); }
    else
    printf("%d",a[n/2]);
    return 0; }