#include <stdio.h>
int main() {
    int n,a[100],d,t[100],j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    for(i=0;i<d;i++) {
        for(j=0;j<n;j++) {
            t[j]=a[j]; }
        for(k=0;k<n;k++) {
            if(k==n-1)
            a[0]=t[k];
            else
            a[k+1]=t[k]; } }
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }