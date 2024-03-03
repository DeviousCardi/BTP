#include<stdio.h>
int main() {
    int a[50],b[50],i,s,d,n,t=0;
    scanf("%d",&d);
    scanf("%d",&n);
    b[-1]=0;
    for(i=0;i<d;i++) {
        scanf("%d",&a[i]);
    b[i]=a[i]; }
    for(i=0;i<d;i++) {
        t=t+a[i]; }
    if(n==0) {
        printf("%d",a[0]); }
    if(n<d&&n!=0) {
        i=0;
        s=0;
        while(i<n) {
        s=s+a[i];
        i++; }
        printf("%d",s); }
    if(n==d) {
        printf("%d",t); }
    if(n>d) {
        for(i=d;i<=n;i++) {
            t=t-b[i-d-1];
            b[i]=t;
            t=t+b[i]; }
        printf("%d",b[n+1]); }
    return 0; }