#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d", &n);
    int a[100], b[100], count[100];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]); }
    for(i=0;i<n;i++) {
        count[i]=0;
        b[i]=0; }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[j]==i+1) {
                count[i]=count[i]+1;
                b[i]=1; } } }
    for(i=0;i<n;i++) {
        if(count[i]==0)
        printf("%d", i+1); }
    for(i=0;i<n;i++) {
        if(b[i]==0)
        printf("%d", i+1); }
    return 0; }