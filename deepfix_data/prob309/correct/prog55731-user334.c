#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int u;
    int a[n];
    for(u=0;u<=n-1;u++) {
        scanf("%d",&a[u]); }
    int i,j;
    int b[n];
    for(i=0;i<n;i++) {
        int count=0;
        for(j=0;j<n;j++) {
            if(a[i]==a[j]) {
                count =count +1;
                b[i]=count;
                continue; } } }
    int k;
    int t=0;
    for(k=0;k<=n-1;k++) {
        if(a[k]!=b[k]) {
            t=1; } }
    if(t==0) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }