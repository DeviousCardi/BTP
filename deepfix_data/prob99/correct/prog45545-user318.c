#include<stdio.h>
int max(int a,int b) {
    if(a>b)return a;
    else return b; }
int main() {
    int n,c=1;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
            b[0]=a[0];
    for(int i=1;i<n-1;i++) {
        if(a[i]>b[i-1]&&a[i]<a[i+1]) {
            c=c+1;
            b[i]=a[i]; }
        else
        b[i]=b[i-1]; }
    printf("%d",c);
    return 0; }