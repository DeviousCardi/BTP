#include <stdio.h>
int main() {
    int n,i,t=0,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]==a[j]) {
                t=t+1; } }
        b[i]=t;
        printf("%d",b[i]);
        t=0; }
    return 0; }