#include <stdio.h>
int main() {
    int n,i,j,pos=0,min=0,temp=0;
    float d=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++) {
        pos=i;
        min=a[i];
        for(j=i+1;j<n;j++) {
            if(a[j]<min) {
                pos=j;
                min=a[j]; } }
        if(pos!=i) {
            temp=a[i];
            a[i]=a[pos];
            a[pos]=temp; } }
    if(n%2==0) {
       d=(a[n/2]+a[n/2-1])/2.0;
       printf("%.1f",d); }
    else
    printf("%d",a[(n-1)/2]);
    return 0; }