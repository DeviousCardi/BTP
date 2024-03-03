#include <stdio.h>
int main() {
    int n,i,c,c1,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
        c=1;
        for(j=i+1;j<n;j++) {
        if(a[i]==a[j]) {
            c=c+1; } }
        if(c==2) {
            printf("%d\n",a[i]);
            break; } }
    for(i=1;i<=n;i++) {
        c1=0;
        for(j=0;j<n;j++) {
            if(i==a[j]) {
                c1=c1+1; } }
        if(c1==0) {
            printf("%d",i); } }
    return 0; }