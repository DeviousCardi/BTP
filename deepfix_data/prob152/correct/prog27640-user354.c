#include <stdio.h>
int main() {
    int a[100],n,i,j,t,sum=0,sum1=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                t=a[i];
                a[i]=a[j];
                a[j]=t; } } }
    for(i=0;i<n;i++) {
        sum1 =sum1 +a[i]; }
    x=sum1/2;
    for(i=0;i<n;i++) {
        sum=a[i]+sum;
        if(t==sum) {
            printf("YES"); } } }