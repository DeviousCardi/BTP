#include <stdio.h>
int main() {
    int a[100],n,i,j,t,sum=0;
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
        sum =sum +a[i]; }
    printf("%d",sum); }