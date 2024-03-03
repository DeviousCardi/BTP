#include<stdio.h>
int main() {
    int a[50],b[50],i,s,d,n,t=0;
    scanf("%d",&d);
    scanf("%d",&n);
    for(i=0;i<d;i++) {
        scanf("%d",&a[i]);
    b[i+1]=a[i]; }
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
    b[0]=0;
    if(n>d) {
        for(i=d+1;i<=n;i++) {
            t=t-b[i-d-1];
            b[i]=t;
            t=t+b[i];
            printf("%d",b[i]); }
        printf("%d",b[n]); }
    return 0; }