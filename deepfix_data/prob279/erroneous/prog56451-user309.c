#include <stdio.h>
int main() {
    int n,count=0,msng,rept;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++) {
        scanf("%d",&x[i]); }
    for(i=1;i<=n;i++) {
        count=0;
        for(j=0;j<n;j++) {
            if(x[j]==i) {
                count++; } }
        if(count==0) {
            msng=i; }
        if(count==2) {
            rept=i; } }
    printf("%d",&rept);
    printf("%d",&msng);
    return 0; }