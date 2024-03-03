#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int max=0;
    for(int k=0;k<n;k++) {
        int m=a[k],c=1;
        for(int i=k+1;i<n;i++) {
            if(a[i]>m) {
                m=a[i];
                c++; } }
        if(max<c)
        max=c; }
    printf("%d",max);
    return 0; }