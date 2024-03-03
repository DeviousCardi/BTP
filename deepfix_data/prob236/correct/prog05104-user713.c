#include <stdio.h>
int main() {
    int n,i,j,k,t,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++) {
        scanf("%d",&a[j]); }
    for(j=0;j<n-1;j++) {
        for(k=j+1;k<n;k++) {
            if(a[j]>a[k]) {
                t=a[j];
                a[j]=a[k];
                a[k]=t; } } }
    for(j=0;j<n;j++) {
        printf("%d",a[j]); }
    printf("end");
    return 0; }