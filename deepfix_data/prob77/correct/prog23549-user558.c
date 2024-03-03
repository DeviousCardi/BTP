#include <stdio.h>
int main() {
    int n,a[n],j,i,M=0,m=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        if(a[i]>a[M])
            M=i; }
    for(i=0;i<n;i++) {
        if(a[i]<a[m])
        m=i; }
    M=M+m;
    m=M-m;
    M=M-m;
    for(i=0;i<5;i++) {
        printf("%d",a[i]); }
    printf("end");
    return 0; }