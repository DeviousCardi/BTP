#include <stdio.h>
int main() {
    int n,i,c,k,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    k=0;
    for(i=0;i<n-1;i++) {
        c=1;
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                c=c+1; } }
        if(c==a[i]) {
            continue; }
        else {
            k=1;
            printf("No");
            break; } }
    if(k!=1) {
        printf("Yes"); }
    return 0; }