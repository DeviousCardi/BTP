#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int u;
    int a[n];
    for (u=0;u<=n-1;u++) {
        scanf("%d",&a[u]); }
    int i,j;
    for(i=0;i<=n-1;i++) {
        for(j=i+1;j<=n-1;j++) {
            if(a[i]==a[j]) {
                printf("%d\n",a[i]);
                break; } } }
    int v;
    int t;
    for(v=1;v<=n;v++) {
        int s=0;
        for(t=0;t<=n-1;t++) {
            if(a[t]=v) {
                s=1; } }
        if(s==0) {
            printf("%d",v); } }
    return 0; }